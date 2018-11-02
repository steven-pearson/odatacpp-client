#pragma once
#include "odata/codegen/code_generation.h"
#include "odata/codegen/odata_service_context.h"
#include "odata/codegen/odata_service_query.h"
#include "odata/codegen/odata_entityset_query_executor.h"
#include "odata/codegen/odata_singleton_query_executor.h"
#include "odata/codegen/odata_primitive_query_executor.h"
#include "odata/codegen/odata_primitive_query_executor.h"
#include "odata/codegen/odata_complex_query_executor.h"
#include "odata/codegen/odata_enum_query_executor.h"
#include "odata/codegen/odata_void_query_executor.h"
#include "odata/codegen/odata_query_builder.h"
#include "cpprest/json.h"

using namespace std;
using namespace ::odata::client;
using namespace ::odata::core;
using namespace ::odata::edm;
using namespace ::odata::codegen;

namespace ODataWebExperimental_Northwind_Model
{


class Summary_of_Sales_by_Quarter;
class Sales_Totals_by_Amount;
class Products_Above_Average_Price;
class Product_Sales_for_1997;
class Orders_Qry;
class Category_Sales_for_1997;
class Order_Details_Extended;
class Alphabetical_list_of_product;
class Products_by_Category;
class Order_Subtotal;
class CustomerDemographic;
class Shipper;
class Sales_by_Category;
class Region;
class Order;
class Product;
class Category;
class Summary_of_Sales_by_Year;
class Customer_and_Suppliers_by_City;
class Employee;
class Order_Detail;
class Supplier;
class Invoice;
class Customer;
class Territory;
class Current_Product_List;

enum PersonGender
{
    Unknown = 2,
    Female = 1,
    Male = 0,
};

class enum_type_resolver
{
public:
    DECLARE_FUNCTION_ENUM_TYPE_FROM_STRING(PersonGender);
    DECLARE_FUNCTION_STRING_FROM_ENUM_TYPE(PersonGender);
    DECLARE_GET_ENUM_TYPE_NAMESPACE(PersonGender, Microsoft.OData.SampleService.Models.TripPin);
};

class Summary_of_Sales_by_Quarter : public type_base
{
public:
    DECLARE_ENTITY_CONSTRUCTOR(Summary_of_Sales_by_Quarter);
    DECLARE_ENTITY_DESTRUCTOR(Summary_of_Sales_by_Quarter);
    DECLARE_EDM_INFO();
    ENABLE_PROPERTY_IN_ENTITY_MAPPING();

    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(shippeddate, ShippedDate, ::utility::datetime);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(orderid, OrderID, int32_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(subtotal, Subtotal, double);

    DECLARE_GET_KEY_PROPERTY_STRING_ONE_PARAM(type_base, OrderID, orderid);
};

class Sales_Totals_by_Amount : public type_base
{
public:
    DECLARE_ENTITY_CONSTRUCTOR(Sales_Totals_by_Amount);
    DECLARE_ENTITY_DESTRUCTOR(Sales_Totals_by_Amount);
    DECLARE_EDM_INFO();
    ENABLE_PROPERTY_IN_ENTITY_MAPPING();

    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(saleamount, SaleAmount, double);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(companyname, CompanyName, ::utility::string_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(orderid, OrderID, int32_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(shippeddate, ShippedDate, ::utility::datetime);

    DECLARE_GET_KEY_PROPERTY_STRING_TWO_PARAM(type_base, CompanyName, companyname, OrderID, orderid);
};

class Products_Above_Average_Price : public type_base
{
public:
    DECLARE_ENTITY_CONSTRUCTOR(Products_Above_Average_Price);
    DECLARE_ENTITY_DESTRUCTOR(Products_Above_Average_Price);
    DECLARE_EDM_INFO();
    ENABLE_PROPERTY_IN_ENTITY_MAPPING();

    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(unitprice, UnitPrice, double);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(productname, ProductName, ::utility::string_t);

    DECLARE_GET_KEY_PROPERTY_STRING_ONE_PARAM(type_base, ProductName, productname);
};

class Product_Sales_for_1997 : public type_base
{
public:
    DECLARE_ENTITY_CONSTRUCTOR(Product_Sales_for_1997);
    DECLARE_ENTITY_DESTRUCTOR(Product_Sales_for_1997);
    DECLARE_EDM_INFO();
    ENABLE_PROPERTY_IN_ENTITY_MAPPING();

    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(productsales, ProductSales, double);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(categoryname, CategoryName, ::utility::string_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(productname, ProductName, ::utility::string_t);

    DECLARE_GET_KEY_PROPERTY_STRING_TWO_PARAM(type_base, CategoryName, categoryname, ProductName, productname);
};

class Orders_Qry : public type_base
{
public:
    DECLARE_ENTITY_CONSTRUCTOR(Orders_Qry);
    DECLARE_ENTITY_DESTRUCTOR(Orders_Qry);
    DECLARE_EDM_INFO();
    ENABLE_PROPERTY_IN_ENTITY_MAPPING();

    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(requireddate, RequiredDate, ::utility::datetime);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(employeeid, EmployeeID, int32_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(shipvia, ShipVia, int32_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(customerid, CustomerID, ::utility::string_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(country, Country, ::utility::string_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(shipcountry, ShipCountry, ::utility::string_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(orderid, OrderID, int32_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(companyname, CompanyName, ::utility::string_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(orderdate, OrderDate, ::utility::datetime);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(address, Address, ::utility::string_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(shippeddate, ShippedDate, ::utility::datetime);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(shipaddress, ShipAddress, ::utility::string_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(shipname, ShipName, ::utility::string_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(shipcity, ShipCity, ::utility::string_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(shippostalcode, ShipPostalCode, ::utility::string_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(city, City, ::utility::string_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(region, Region, ::utility::string_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(freight, Freight, double);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(shipregion, ShipRegion, ::utility::string_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(postalcode, PostalCode, ::utility::string_t);

    DECLARE_GET_KEY_PROPERTY_STRING_TWO_PARAM(type_base, OrderID, orderid, CompanyName, companyname);
};

class Category_Sales_for_1997 : public type_base
{
public:
    DECLARE_ENTITY_CONSTRUCTOR(Category_Sales_for_1997);
    DECLARE_ENTITY_DESTRUCTOR(Category_Sales_for_1997);
    DECLARE_EDM_INFO();
    ENABLE_PROPERTY_IN_ENTITY_MAPPING();

    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(categoryname, CategoryName, ::utility::string_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(categorysales, CategorySales, double);

    DECLARE_GET_KEY_PROPERTY_STRING_ONE_PARAM(type_base, CategoryName, categoryname);
};

class Order_Details_Extended : public type_base
{
public:
    DECLARE_ENTITY_CONSTRUCTOR(Order_Details_Extended);
    DECLARE_ENTITY_DESTRUCTOR(Order_Details_Extended);
    DECLARE_EDM_INFO();
    ENABLE_PROPERTY_IN_ENTITY_MAPPING();

    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(productid, ProductID, int32_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(orderid, OrderID, int32_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(unitprice, UnitPrice, double);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(discount, Discount, float);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(productname, ProductName, ::utility::string_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(quantity, Quantity, int16_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(extendedprice, ExtendedPrice, double);

    DECLARE_GET_KEY_PROPERTY_STRING_SIX_PARAM(type_base, ProductID, productid, OrderID, orderid, UnitPrice, unitprice, Discount, discount, ProductName, productname, Quantity, quantity);
};

class Alphabetical_list_of_product : public type_base
{
public:
    DECLARE_ENTITY_CONSTRUCTOR(Alphabetical_list_of_product);
    DECLARE_ENTITY_DESTRUCTOR(Alphabetical_list_of_product);
    DECLARE_EDM_INFO();
    ENABLE_PROPERTY_IN_ENTITY_MAPPING();

    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(unitsonorder, UnitsOnOrder, int16_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(productname, ProductName, ::utility::string_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(productid, ProductID, int32_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(quantityperunit, QuantityPerUnit, ::utility::string_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(supplierid, SupplierID, int32_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(categoryid, CategoryID, int32_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(unitprice, UnitPrice, double);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(discontinued, Discontinued, bool);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(unitsinstock, UnitsInStock, int16_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(reorderlevel, ReorderLevel, int16_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(categoryname, CategoryName, ::utility::string_t);

    DECLARE_GET_KEY_PROPERTY_STRING_FOUR_PARAM(type_base, ProductName, productname, ProductID, productid, Discontinued, discontinued, CategoryName, categoryname);
};

class Products_by_Category : public type_base
{
public:
    DECLARE_ENTITY_CONSTRUCTOR(Products_by_Category);
    DECLARE_ENTITY_DESTRUCTOR(Products_by_Category);
    DECLARE_EDM_INFO();
    ENABLE_PROPERTY_IN_ENTITY_MAPPING();

    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(unitsinstock, UnitsInStock, int16_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(categoryname, CategoryName, ::utility::string_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(quantityperunit, QuantityPerUnit, ::utility::string_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(productname, ProductName, ::utility::string_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(discontinued, Discontinued, bool);

    DECLARE_GET_KEY_PROPERTY_STRING_THREE_PARAM(type_base, CategoryName, categoryname, ProductName, productname, Discontinued, discontinued);
};

class Order_Subtotal : public type_base
{
public:
    DECLARE_ENTITY_CONSTRUCTOR(Order_Subtotal);
    DECLARE_ENTITY_DESTRUCTOR(Order_Subtotal);
    DECLARE_EDM_INFO();
    ENABLE_PROPERTY_IN_ENTITY_MAPPING();

    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(subtotal, Subtotal, double);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(orderid, OrderID, int32_t);

    DECLARE_GET_KEY_PROPERTY_STRING_ONE_PARAM(type_base, OrderID, orderid);
};

class CustomerDemographic : public type_base
{
public:
    DECLARE_ENTITY_CONSTRUCTOR(CustomerDemographic);
    DECLARE_ENTITY_DESTRUCTOR(CustomerDemographic);
    DECLARE_EDM_INFO();
    ENABLE_PROPERTY_IN_ENTITY_MAPPING();

    DECLARE_COLLECTION_NAVIGATION_PROPERTY_IN_ENTITY_MAPPING(customers, Customers, Customer);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(customertypeid, CustomerTypeID, ::utility::string_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(customerdesc, CustomerDesc, ::utility::string_t);

    DECLARE_GET_KEY_PROPERTY_STRING_ONE_PARAM(type_base, CustomerTypeID, customertypeid);
};

class Shipper : public type_base
{
public:
    DECLARE_ENTITY_CONSTRUCTOR(Shipper);
    DECLARE_ENTITY_DESTRUCTOR(Shipper);
    DECLARE_EDM_INFO();
    ENABLE_PROPERTY_IN_ENTITY_MAPPING();

    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(companyname, CompanyName, ::utility::string_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(shipperid, ShipperID, int32_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(phone, Phone, ::utility::string_t);
    DECLARE_COLLECTION_NAVIGATION_PROPERTY_IN_ENTITY_MAPPING(orders, Orders, Order);

    DECLARE_GET_KEY_PROPERTY_STRING_ONE_PARAM(type_base, ShipperID, shipperid);
};

class Sales_by_Category : public type_base
{
public:
    DECLARE_ENTITY_CONSTRUCTOR(Sales_by_Category);
    DECLARE_ENTITY_DESTRUCTOR(Sales_by_Category);
    DECLARE_EDM_INFO();
    ENABLE_PROPERTY_IN_ENTITY_MAPPING();

    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(categoryid, CategoryID, int32_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(productsales, ProductSales, double);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(categoryname, CategoryName, ::utility::string_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(productname, ProductName, ::utility::string_t);

    DECLARE_GET_KEY_PROPERTY_STRING_THREE_PARAM(type_base, CategoryID, categoryid, CategoryName, categoryname, ProductName, productname);
};

class Region : public type_base
{
public:
    DECLARE_ENTITY_CONSTRUCTOR(Region);
    DECLARE_ENTITY_DESTRUCTOR(Region);
    DECLARE_EDM_INFO();
    ENABLE_PROPERTY_IN_ENTITY_MAPPING();

    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(regiondescription, RegionDescription, ::utility::string_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(regionid, RegionID, int32_t);
    DECLARE_COLLECTION_NAVIGATION_PROPERTY_IN_ENTITY_MAPPING(territories, Territories, Territory);

    DECLARE_GET_KEY_PROPERTY_STRING_ONE_PARAM(type_base, RegionID, regionid);
};

class Order : public type_base
{
public:
    DECLARE_ENTITY_CONSTRUCTOR(Order);
    DECLARE_ENTITY_DESTRUCTOR(Order);
    DECLARE_EDM_INFO();
    ENABLE_PROPERTY_IN_ENTITY_MAPPING();

    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(requireddate, RequiredDate, ::utility::datetime);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(employeeid, EmployeeID, int32_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(customerid, CustomerID, ::utility::string_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(shipcountry, ShipCountry, ::utility::string_t);
    DECLARE_NAVIGATION_PROPERTY_IN_ENTITY_MAPPING(customer, Customer, Customer);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(shipvia, ShipVia, int32_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(orderid, OrderID, int32_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(orderdate, OrderDate, ::utility::datetime);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(shippeddate, ShippedDate, ::utility::datetime);
    DECLARE_NAVIGATION_PROPERTY_IN_ENTITY_MAPPING(employee, Employee, Employee);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(shippostalcode, ShipPostalCode, ::utility::string_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(shipcity, ShipCity, ::utility::string_t);
    DECLARE_COLLECTION_NAVIGATION_PROPERTY_IN_ENTITY_MAPPING(order_details, Order_Details, Order_Detail);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(shipname, ShipName, ::utility::string_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(freight, Freight, double);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(shipregion, ShipRegion, ::utility::string_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(shipaddress, ShipAddress, ::utility::string_t);
    DECLARE_NAVIGATION_PROPERTY_IN_ENTITY_MAPPING(shipper, Shipper, Shipper);

    DECLARE_GET_KEY_PROPERTY_STRING_ONE_PARAM(type_base, OrderID, orderid);
};

class Product : public type_base
{
public:
    DECLARE_ENTITY_CONSTRUCTOR(Product);
    DECLARE_ENTITY_DESTRUCTOR(Product);
    DECLARE_EDM_INFO();
    ENABLE_PROPERTY_IN_ENTITY_MAPPING();

    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(unitsonorder, UnitsOnOrder, int16_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(discontinued, Discontinued, bool);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(unitsinstock, UnitsInStock, int16_t);
    DECLARE_NAVIGATION_PROPERTY_IN_ENTITY_MAPPING(supplier, Supplier, Supplier);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(productname, ProductName, ::utility::string_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(quantityperunit, QuantityPerUnit, ::utility::string_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(categoryid, CategoryID, int32_t);
    DECLARE_COLLECTION_NAVIGATION_PROPERTY_IN_ENTITY_MAPPING(order_details, Order_Details, Order_Detail);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(productid, ProductID, int32_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(unitprice, UnitPrice, double);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(supplierid, SupplierID, int32_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(reorderlevel, ReorderLevel, int16_t);
    DECLARE_NAVIGATION_PROPERTY_IN_ENTITY_MAPPING(category, Category, Category);

    DECLARE_GET_KEY_PROPERTY_STRING_ONE_PARAM(type_base, ProductID, productid);
};

class Category : public type_base
{
public:
    DECLARE_ENTITY_CONSTRUCTOR(Category);
    DECLARE_ENTITY_DESTRUCTOR(Category);
    DECLARE_EDM_INFO();
    ENABLE_PROPERTY_IN_ENTITY_MAPPING();

    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(description, Description, ::utility::string_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(categoryid, CategoryID, int32_t);
    DECLARE_COLLECTION_NAVIGATION_PROPERTY_IN_ENTITY_MAPPING(products, Products, Product);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(categoryname, CategoryName, ::utility::string_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(picture, Picture, std::vector<unsigned char>);

    DECLARE_GET_KEY_PROPERTY_STRING_ONE_PARAM(type_base, CategoryID, categoryid);
};

class Summary_of_Sales_by_Year : public type_base
{
public:
    DECLARE_ENTITY_CONSTRUCTOR(Summary_of_Sales_by_Year);
    DECLARE_ENTITY_DESTRUCTOR(Summary_of_Sales_by_Year);
    DECLARE_EDM_INFO();
    ENABLE_PROPERTY_IN_ENTITY_MAPPING();

    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(shippeddate, ShippedDate, ::utility::datetime);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(orderid, OrderID, int32_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(subtotal, Subtotal, double);

    DECLARE_GET_KEY_PROPERTY_STRING_ONE_PARAM(type_base, OrderID, orderid);
};

class Customer_and_Suppliers_by_City : public type_base
{
public:
    DECLARE_ENTITY_CONSTRUCTOR(Customer_and_Suppliers_by_City);
    DECLARE_ENTITY_DESTRUCTOR(Customer_and_Suppliers_by_City);
    DECLARE_EDM_INFO();
    ENABLE_PROPERTY_IN_ENTITY_MAPPING();

    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(relationship, Relationship, ::utility::string_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(city, City, ::utility::string_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(contactname, ContactName, ::utility::string_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(companyname, CompanyName, ::utility::string_t);

    DECLARE_GET_KEY_PROPERTY_STRING_TWO_PARAM(type_base, Relationship, relationship, CompanyName, companyname);
};

class Employee : public type_base
{
public:
    DECLARE_ENTITY_CONSTRUCTOR(Employee);
    DECLARE_ENTITY_DESTRUCTOR(Employee);
    DECLARE_EDM_INFO();
    ENABLE_PROPERTY_IN_ENTITY_MAPPING();

    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(birthdate, BirthDate, ::utility::datetime);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(firstname, FirstName, ::utility::string_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(title, Title, ::utility::string_t);
    DECLARE_COLLECTION_NAVIGATION_PROPERTY_IN_ENTITY_MAPPING(employees1, Employees1, Employee);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(employeeid, EmployeeID, int32_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(titleofcourtesy, TitleOfCourtesy, ::utility::string_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(region, Region, ::utility::string_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(city, City, ::utility::string_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(address, Address, ::utility::string_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(lastname, LastName, ::utility::string_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(hiredate, HireDate, ::utility::datetime);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(postalcode, PostalCode, ::utility::string_t);
    DECLARE_NAVIGATION_PROPERTY_IN_ENTITY_MAPPING(employee1, Employee1, Employee);
    DECLARE_COLLECTION_NAVIGATION_PROPERTY_IN_ENTITY_MAPPING(territories, Territories, Territory);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(country, Country, ::utility::string_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(homephone, HomePhone, ::utility::string_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(extension, Extension, ::utility::string_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(photopath, PhotoPath, ::utility::string_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(photo, Photo, std::vector<unsigned char>);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(notes, Notes, ::utility::string_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(reportsto, ReportsTo, int32_t);
    DECLARE_COLLECTION_NAVIGATION_PROPERTY_IN_ENTITY_MAPPING(orders, Orders, Order);

    DECLARE_GET_KEY_PROPERTY_STRING_ONE_PARAM(type_base, EmployeeID, employeeid);
};

class Order_Detail : public type_base
{
public:
    DECLARE_ENTITY_CONSTRUCTOR(Order_Detail);
    DECLARE_ENTITY_DESTRUCTOR(Order_Detail);
    DECLARE_EDM_INFO();
    ENABLE_PROPERTY_IN_ENTITY_MAPPING();

    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(quantity, Quantity, int16_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(productid, ProductID, int32_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(orderid, OrderID, int32_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(unitprice, UnitPrice, double);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(discount, Discount, float);
    DECLARE_NAVIGATION_PROPERTY_IN_ENTITY_MAPPING(order, Order, Order);
    DECLARE_NAVIGATION_PROPERTY_IN_ENTITY_MAPPING(product, Product, Product);

    DECLARE_GET_KEY_PROPERTY_STRING_TWO_PARAM(type_base, ProductID, productid, OrderID, orderid);
};

class Supplier : public type_base
{
public:
    DECLARE_ENTITY_CONSTRUCTOR(Supplier);
    DECLARE_ENTITY_DESTRUCTOR(Supplier);
    DECLARE_EDM_INFO();
    ENABLE_PROPERTY_IN_ENTITY_MAPPING();

    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(companyname, CompanyName, ::utility::string_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(contactname, ContactName, ::utility::string_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(address, Address, ::utility::string_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(contacttitle, ContactTitle, ::utility::string_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(region, Region, ::utility::string_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(city, City, ::utility::string_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(country, Country, ::utility::string_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(supplierid, SupplierID, int32_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(postalcode, PostalCode, ::utility::string_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(fax, Fax, ::utility::string_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(phone, Phone, ::utility::string_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(homepage, HomePage, ::utility::string_t);
    DECLARE_COLLECTION_NAVIGATION_PROPERTY_IN_ENTITY_MAPPING(products, Products, Product);

    DECLARE_GET_KEY_PROPERTY_STRING_ONE_PARAM(type_base, SupplierID, supplierid);
};

class Invoice : public type_base
{
public:
    DECLARE_ENTITY_CONSTRUCTOR(Invoice);
    DECLARE_ENTITY_DESTRUCTOR(Invoice);
    DECLARE_EDM_INFO();
    ENABLE_PROPERTY_IN_ENTITY_MAPPING();

    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(orderdate, OrderDate, ::utility::datetime);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(shippeddate, ShippedDate, ::utility::datetime);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(shipaddress, ShipAddress, ::utility::string_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(quantity, Quantity, int16_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(shipname, ShipName, ::utility::string_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(unitprice, UnitPrice, double);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(shipregion, ShipRegion, ::utility::string_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(discount, Discount, float);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(postalcode, PostalCode, ::utility::string_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(productid, ProductID, int32_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(shippostalcode, ShipPostalCode, ::utility::string_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(customername, CustomerName, ::utility::string_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(address, Address, ::utility::string_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(salesperson, Salesperson, ::utility::string_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(shipcity, ShipCity, ::utility::string_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(country, Country, ::utility::string_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(shipcountry, ShipCountry, ::utility::string_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(orderid, OrderID, int32_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(customerid, CustomerID, ::utility::string_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(city, City, ::utility::string_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(region, Region, ::utility::string_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(extendedprice, ExtendedPrice, double);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(shippername, ShipperName, ::utility::string_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(productname, ProductName, ::utility::string_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(requireddate, RequiredDate, ::utility::datetime);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(freight, Freight, double);

    DECLARE_GET_KEY_PROPERTY_STRING_NINE_PARAM(type_base, Quantity, quantity, UnitPrice, unitprice, Discount, discount, ProductID, productid, CustomerName, customername, Salesperson, salesperson, OrderID, orderid, ShipperName, shippername, ProductName, productname);
};

class Customer : public type_base
{
public:
    DECLARE_ENTITY_CONSTRUCTOR(Customer);
    DECLARE_ENTITY_DESTRUCTOR(Customer);
    DECLARE_EDM_INFO();
    ENABLE_PROPERTY_IN_ENTITY_MAPPING();

    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(companyname, CompanyName, ::utility::string_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(region, Region, ::utility::string_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(city, City, ::utility::string_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(country, Country, ::utility::string_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(customerid, CustomerID, ::utility::string_t);
    DECLARE_COLLECTION_NAVIGATION_PROPERTY_IN_ENTITY_MAPPING(customerdemographics, CustomerDemographics, CustomerDemographic);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(postalcode, PostalCode, ::utility::string_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(fax, Fax, ::utility::string_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(phone, Phone, ::utility::string_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(contactname, ContactName, ::utility::string_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(address, Address, ::utility::string_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(contacttitle, ContactTitle, ::utility::string_t);
    DECLARE_COLLECTION_NAVIGATION_PROPERTY_IN_ENTITY_MAPPING(orders, Orders, Order);

    DECLARE_GET_KEY_PROPERTY_STRING_ONE_PARAM(type_base, CustomerID, customerid);
};

class Territory : public type_base
{
public:
    DECLARE_ENTITY_CONSTRUCTOR(Territory);
    DECLARE_ENTITY_DESTRUCTOR(Territory);
    DECLARE_EDM_INFO();
    ENABLE_PROPERTY_IN_ENTITY_MAPPING();

    DECLARE_COLLECTION_NAVIGATION_PROPERTY_IN_ENTITY_MAPPING(employees, Employees, Employee);
    DECLARE_NAVIGATION_PROPERTY_IN_ENTITY_MAPPING(region, Region, Region);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(regionid, RegionID, int32_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(territorydescription, TerritoryDescription, ::utility::string_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(territoryid, TerritoryID, ::utility::string_t);

    DECLARE_GET_KEY_PROPERTY_STRING_ONE_PARAM(type_base, TerritoryID, territoryid);
};

class Current_Product_List : public type_base
{
public:
    DECLARE_ENTITY_CONSTRUCTOR(Current_Product_List);
    DECLARE_ENTITY_DESTRUCTOR(Current_Product_List);
    DECLARE_EDM_INFO();
    ENABLE_PROPERTY_IN_ENTITY_MAPPING();

    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(productname, ProductName, ::utility::string_t);
    DECLARE_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(productid, ProductID, int32_t);

    DECLARE_GET_KEY_PROPERTY_STRING_TWO_PARAM(type_base, ProductName, productname, ProductID, productid);
};

class NorthwindEntities : public odata_service_context
{
public:
    NorthwindEntities(const ::utility::string_t& baseAddress, client_options options = client_options()) : odata_service_context(baseAddress, options)
    {
    }

    std::shared_ptr<odata_service_query<odata_entityset_query_executor<CustomerDemographic>, odata_query_builder>> create_customerdemographics_query()
    {
        return create_query<odata_entityset_query_executor<CustomerDemographic>, odata_query_builder>(U("CustomerDemographics"));
    }

    std::shared_ptr<odata_service_query<odata_entityset_query_executor<Territory>, odata_query_builder>> create_territories_query()
    {
        return create_query<odata_entityset_query_executor<Territory>, odata_query_builder>(U("Territories"));
    }

    std::shared_ptr<odata_service_query<odata_entityset_query_executor<Order>, odata_query_builder>> create_orders_query()
    {
        return create_query<odata_entityset_query_executor<Order>, odata_query_builder>(U("Orders"));
    }

    std::shared_ptr<odata_service_query<odata_entityset_query_executor<Product>, odata_query_builder>> create_products_query()
    {
        return create_query<odata_entityset_query_executor<Product>, odata_query_builder>(U("Products"));
    }

    std::shared_ptr<odata_service_query<odata_entityset_query_executor<Products_by_Category>, odata_query_builder>> create_products_by_categories_query()
    {
        return create_query<odata_entityset_query_executor<Products_by_Category>, odata_query_builder>(U("Products_by_Categories"));
    }

    std::shared_ptr<odata_service_query<odata_entityset_query_executor<Order_Detail>, odata_query_builder>> create_order_details_query()
    {
        return create_query<odata_entityset_query_executor<Order_Detail>, odata_query_builder>(U("Order_Details"));
    }

    std::shared_ptr<odata_service_query<odata_entityset_query_executor<Supplier>, odata_query_builder>> create_suppliers_query()
    {
        return create_query<odata_entityset_query_executor<Supplier>, odata_query_builder>(U("Suppliers"));
    }

    std::shared_ptr<odata_service_query<odata_entityset_query_executor<Region>, odata_query_builder>> create_regions_query()
    {
        return create_query<odata_entityset_query_executor<Region>, odata_query_builder>(U("Regions"));
    }

    std::shared_ptr<odata_service_query<odata_entityset_query_executor<Product_Sales_for_1997>, odata_query_builder>> create_product_sales_for_1997_query()
    {
        return create_query<odata_entityset_query_executor<Product_Sales_for_1997>, odata_query_builder>(U("Product_Sales_for_1997"));
    }

    std::shared_ptr<odata_service_query<odata_entityset_query_executor<Orders_Qry>, odata_query_builder>> create_orders_qries_query()
    {
        return create_query<odata_entityset_query_executor<Orders_Qry>, odata_query_builder>(U("Orders_Qries"));
    }

    std::shared_ptr<odata_service_query<odata_entityset_query_executor<Order_Subtotal>, odata_query_builder>> create_order_subtotals_query()
    {
        return create_query<odata_entityset_query_executor<Order_Subtotal>, odata_query_builder>(U("Order_Subtotals"));
    }

    std::shared_ptr<odata_service_query<odata_entityset_query_executor<Shipper>, odata_query_builder>> create_shippers_query()
    {
        return create_query<odata_entityset_query_executor<Shipper>, odata_query_builder>(U("Shippers"));
    }

    std::shared_ptr<odata_service_query<odata_entityset_query_executor<Employee>, odata_query_builder>> create_employees_query()
    {
        return create_query<odata_entityset_query_executor<Employee>, odata_query_builder>(U("Employees"));
    }

    std::shared_ptr<odata_service_query<odata_entityset_query_executor<Invoice>, odata_query_builder>> create_invoices_query()
    {
        return create_query<odata_entityset_query_executor<Invoice>, odata_query_builder>(U("Invoices"));
    }

    std::shared_ptr<odata_service_query<odata_entityset_query_executor<Sales_by_Category>, odata_query_builder>> create_sales_by_categories_query()
    {
        return create_query<odata_entityset_query_executor<Sales_by_Category>, odata_query_builder>(U("Sales_by_Categories"));
    }

    std::shared_ptr<odata_service_query<odata_entityset_query_executor<Category_Sales_for_1997>, odata_query_builder>> create_category_sales_for_1997_query()
    {
        return create_query<odata_entityset_query_executor<Category_Sales_for_1997>, odata_query_builder>(U("Category_Sales_for_1997"));
    }

    std::shared_ptr<odata_service_query<odata_entityset_query_executor<Customer>, odata_query_builder>> create_customers_query()
    {
        return create_query<odata_entityset_query_executor<Customer>, odata_query_builder>(U("Customers"));
    }

    std::shared_ptr<odata_service_query<odata_entityset_query_executor<Alphabetical_list_of_product>, odata_query_builder>> create_alphabetical_list_of_products_query()
    {
        return create_query<odata_entityset_query_executor<Alphabetical_list_of_product>, odata_query_builder>(U("Alphabetical_list_of_products"));
    }

    std::shared_ptr<odata_service_query<odata_entityset_query_executor<Current_Product_List>, odata_query_builder>> create_current_product_lists_query()
    {
        return create_query<odata_entityset_query_executor<Current_Product_List>, odata_query_builder>(U("Current_Product_Lists"));
    }

    std::shared_ptr<odata_service_query<odata_entityset_query_executor<Customer_and_Suppliers_by_City>, odata_query_builder>> create_customer_and_suppliers_by_cities_query()
    {
        return create_query<odata_entityset_query_executor<Customer_and_Suppliers_by_City>, odata_query_builder>(U("Customer_and_Suppliers_by_Cities"));
    }

    std::shared_ptr<odata_service_query<odata_entityset_query_executor<Sales_Totals_by_Amount>, odata_query_builder>> create_sales_totals_by_amounts_query()
    {
        return create_query<odata_entityset_query_executor<Sales_Totals_by_Amount>, odata_query_builder>(U("Sales_Totals_by_Amounts"));
    }

    std::shared_ptr<odata_service_query<odata_entityset_query_executor<Products_Above_Average_Price>, odata_query_builder>> create_products_above_average_prices_query()
    {
        return create_query<odata_entityset_query_executor<Products_Above_Average_Price>, odata_query_builder>(U("Products_Above_Average_Prices"));
    }

    std::shared_ptr<odata_service_query<odata_entityset_query_executor<Summary_of_Sales_by_Quarter>, odata_query_builder>> create_summary_of_sales_by_quarters_query()
    {
        return create_query<odata_entityset_query_executor<Summary_of_Sales_by_Quarter>, odata_query_builder>(U("Summary_of_Sales_by_Quarters"));
    }

    std::shared_ptr<odata_service_query<odata_entityset_query_executor<Summary_of_Sales_by_Year>, odata_query_builder>> create_summary_of_sales_by_years_query()
    {
        return create_query<odata_entityset_query_executor<Summary_of_Sales_by_Year>, odata_query_builder>(U("Summary_of_Sales_by_Years"));
    }

    std::shared_ptr<odata_service_query<odata_entityset_query_executor<Category>, odata_query_builder>> create_categories_query()
    {
        return create_query<odata_entityset_query_executor<Category>, odata_query_builder>(U("Categories"));
    }

    std::shared_ptr<odata_service_query<odata_entityset_query_executor<Order_Details_Extended>, odata_query_builder>> create_order_details_extendeds_query()
    {
        return create_query<odata_entityset_query_executor<Order_Details_Extended>, odata_query_builder>(U("Order_Details_Extendeds"));
    }

};

#include "odata/codegen/odata_function_param_formatter.h"

}
