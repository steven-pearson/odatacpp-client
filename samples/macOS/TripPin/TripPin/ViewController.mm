//
//  ViewController.m
//  TripPin
//
//  Created by Steve Pearson on 31/10/2018.
//  Copyright © 2018 MyOrg. All rights reserved.
//

#import "ViewController.h"
#include "odata/client/odata_client.h"
#include "northwind_service.h"
#include <cpprest/http_client.h>
#include <cpprest/filestream.h>

using namespace utility;                    // Common utilities like string conversions
using namespace web;                        // Common features like URIs.
using namespace web::http;                  // Common HTTP functionality
using namespace web::http::client;          // HTTP client features
using namespace concurrency::streams;       // Asynchronous streams
using namespace ODataWebExperimental_Northwind_Model;

@interface ViewController () {
    NSMutableArray *_objects;
    std::vector<std::shared_ptr<Product>> data;
}
@end

@implementation ViewController

- (void) loadNorthwindProductData
{
    ::utility::string_t service_root(U("https://services.odata.org/V4/Northwind/Northwind.svc"));
    
    auto service_context = std::make_shared<NorthwindEntities>(service_root);
    auto query = service_context->create_products_query()->execute_query();

    query.then([=](::pplx::task<std::vector<std::shared_ptr<Product>>> value) {
        
        data = value.get();
        dispatch_async(dispatch_get_main_queue(), ^{
            [self.tableView reloadData];
        });
    });
}

- (void)viewDidLoad {
    [self loadNorthwindProductData];
    
    [super viewDidLoad];
    self.tableView.delegate = self;
    self.tableView.dataSource = self;
}

- (void)setRepresentedObject:(id)representedObject {
    [super setRepresentedObject:representedObject];

    // Update the view, if already loaded.
}

- (NSInteger)numberOfRowsInTableView:(NSTableView *)tableView {
    return data.size();
}

- (NSView*)tableView:(NSTableView *)tableView viewForTableColumn:(NSTableColumn *)tableColumn row:(NSInteger)row {
    NSTableCellView *cellView = [tableView makeViewWithIdentifier:tableColumn.identifier owner:self];
    
    auto dataRow = data[row];
    cellView.textField.stringValue =  [NSString stringWithFormat:@"%s", dataRow->get_productname().c_str()];

    return cellView;
}

@end
