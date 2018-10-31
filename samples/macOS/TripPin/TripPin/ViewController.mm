//
//  ViewController.m
//  TripPin
//
//  Created by Steve Pearson on 31/10/2018.
//  Copyright © 2018 MyOrg. All rights reserved.
//

#import "ViewController.h"
#include "odata/client/odata_client.h"
#include "trippin_service.h"
#include <cpprest/http_client.h>
#include <cpprest/filestream.h>

using namespace utility;                    // Common utilities like string conversions
using namespace web;                        // Common features like URIs.
using namespace web::http;                  // Common HTTP functionality
using namespace web::http::client;          // HTTP client features
using namespace concurrency::streams;       // Asynchronous streams
using namespace Microsoft_OData_SampleService_Models_TripPin;

@interface ViewController () {
    NSMutableArray *_objects;
    std::vector<std::shared_ptr<Airline>> airlines;
}
@end

@implementation ViewController

-(void) bingTest
{
    
}

- (void) loadInitialData
{
    ::utility::string_t service_root(U("https://services.odata.org/V4/(S(2ldtxpshdgzdinhcyq5mfstr))/TripPinServiceRW/"));
    
    auto service_context = std::make_shared<DefaultContainer>(service_root);
    
    auto query = service_context->create_airlines_query();
    try {
        auto result = query->execute_query();
    
        airlines = result.get();
    } catch (exception e) {
        cout << e.what();
    }
}

- (void)viewDidLoad {
    [super viewDidLoad];

    [self bingTest];
    [self loadInitialData];
}


- (void)setRepresentedObject:(id)representedObject {
    [super setRepresentedObject:representedObject];

    // Update the view, if already loaded.
}


@end
