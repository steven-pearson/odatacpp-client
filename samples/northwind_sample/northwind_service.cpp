#include "northwind_service.h"

namespace ODataWebExperimental_Northwind_Model
{

BEGIN_ENTITY_CONSTRUCTOR(Summary_of_Sales_by_Quarter, type_base)
    ON_PROPERTY_IN_ENTITY_CONSTRUCTOR(orderid, 0)
    ON_PROPERTY_IN_ENTITY_CONSTRUCTOR(subtotal, 0.0)
END_ENTITY_CONSTRUCTOR(Summary_of_Sales_by_Quarter, type_base)

BEGIN_ENTITY_DESTRUCTOR(Summary_of_Sales_by_Quarter)
END_ENTITY_DESTRUCTOR(Summary_of_Sales_by_Quarter)

IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Summary_of_Sales_by_Quarter, shippeddate, ShippedDate, ::utility::datetime);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Summary_of_Sales_by_Quarter, orderid, OrderID, int32_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Summary_of_Sales_by_Quarter, subtotal, Subtotal, long double);

IMPLEMENT_EDM_INFO(Summary_of_Sales_by_Quarter, NorthwindModel, Summary_of_Sales_by_Quarter)

BEGIN_PROPERTY_IN_ENTITY_MAPPING(Summary_of_Sales_by_Quarter)
    ON_PROPERTY_IN_ENTITY_MAPPING(Summary_of_Sales_by_Quarter, shippeddate)
    ON_PROPERTY_IN_ENTITY_MAPPING(Summary_of_Sales_by_Quarter, orderid)
    ON_PROPERTY_IN_ENTITY_MAPPING(Summary_of_Sales_by_Quarter, subtotal)
END_PROPERTY_IN_ENTITY_MAPPING(Summary_of_Sales_by_Quarter)

BEGIN_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Summary_of_Sales_by_Quarter)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Summary_of_Sales_by_Quarter, shippeddate)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Summary_of_Sales_by_Quarter, orderid)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Summary_of_Sales_by_Quarter, subtotal)
END_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Summary_of_Sales_by_Quarter)

BEGIN_ENTITY_CONSTRUCTOR(Sales_Totals_by_Amount, type_base)
    ON_PROPERTY_IN_ENTITY_CONSTRUCTOR(saleamount, 0.0)
    ON_PROPERTY_IN_ENTITY_CONSTRUCTOR(orderid, 0)
END_ENTITY_CONSTRUCTOR(Sales_Totals_by_Amount, type_base)

BEGIN_ENTITY_DESTRUCTOR(Sales_Totals_by_Amount)
END_ENTITY_DESTRUCTOR(Sales_Totals_by_Amount)

IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Sales_Totals_by_Amount, saleamount, SaleAmount, long double);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Sales_Totals_by_Amount, companyname, CompanyName, ::utility::string_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Sales_Totals_by_Amount, orderid, OrderID, int32_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Sales_Totals_by_Amount, shippeddate, ShippedDate, ::utility::datetime);

IMPLEMENT_EDM_INFO(Sales_Totals_by_Amount, NorthwindModel, Sales_Totals_by_Amount)

BEGIN_PROPERTY_IN_ENTITY_MAPPING(Sales_Totals_by_Amount)
    ON_PROPERTY_IN_ENTITY_MAPPING(Sales_Totals_by_Amount, saleamount)
    ON_PROPERTY_IN_ENTITY_MAPPING(Sales_Totals_by_Amount, companyname)
    ON_PROPERTY_IN_ENTITY_MAPPING(Sales_Totals_by_Amount, orderid)
    ON_PROPERTY_IN_ENTITY_MAPPING(Sales_Totals_by_Amount, shippeddate)
END_PROPERTY_IN_ENTITY_MAPPING(Sales_Totals_by_Amount)

BEGIN_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Sales_Totals_by_Amount)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Sales_Totals_by_Amount, saleamount)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Sales_Totals_by_Amount, companyname)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Sales_Totals_by_Amount, orderid)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Sales_Totals_by_Amount, shippeddate)
END_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Sales_Totals_by_Amount)

BEGIN_ENTITY_CONSTRUCTOR(Products_Above_Average_Price, type_base)
    ON_PROPERTY_IN_ENTITY_CONSTRUCTOR(unitprice, 0.0)
END_ENTITY_CONSTRUCTOR(Products_Above_Average_Price, type_base)

BEGIN_ENTITY_DESTRUCTOR(Products_Above_Average_Price)
END_ENTITY_DESTRUCTOR(Products_Above_Average_Price)

IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Products_Above_Average_Price, unitprice, UnitPrice, long double);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Products_Above_Average_Price, productname, ProductName, ::utility::string_t);

IMPLEMENT_EDM_INFO(Products_Above_Average_Price, NorthwindModel, Products_Above_Average_Price)

BEGIN_PROPERTY_IN_ENTITY_MAPPING(Products_Above_Average_Price)
    ON_PROPERTY_IN_ENTITY_MAPPING(Products_Above_Average_Price, unitprice)
    ON_PROPERTY_IN_ENTITY_MAPPING(Products_Above_Average_Price, productname)
END_PROPERTY_IN_ENTITY_MAPPING(Products_Above_Average_Price)

BEGIN_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Products_Above_Average_Price)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Products_Above_Average_Price, unitprice)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Products_Above_Average_Price, productname)
END_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Products_Above_Average_Price)

BEGIN_ENTITY_CONSTRUCTOR(Product_Sales_for_1997, type_base)
    ON_PROPERTY_IN_ENTITY_CONSTRUCTOR(productsales, 0.0)
END_ENTITY_CONSTRUCTOR(Product_Sales_for_1997, type_base)

BEGIN_ENTITY_DESTRUCTOR(Product_Sales_for_1997)
END_ENTITY_DESTRUCTOR(Product_Sales_for_1997)

IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Product_Sales_for_1997, productsales, ProductSales, long double);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Product_Sales_for_1997, categoryname, CategoryName, ::utility::string_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Product_Sales_for_1997, productname, ProductName, ::utility::string_t);

IMPLEMENT_EDM_INFO(Product_Sales_for_1997, NorthwindModel, Product_Sales_for_1997)

BEGIN_PROPERTY_IN_ENTITY_MAPPING(Product_Sales_for_1997)
    ON_PROPERTY_IN_ENTITY_MAPPING(Product_Sales_for_1997, productsales)
    ON_PROPERTY_IN_ENTITY_MAPPING(Product_Sales_for_1997, categoryname)
    ON_PROPERTY_IN_ENTITY_MAPPING(Product_Sales_for_1997, productname)
END_PROPERTY_IN_ENTITY_MAPPING(Product_Sales_for_1997)

BEGIN_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Product_Sales_for_1997)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Product_Sales_for_1997, productsales)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Product_Sales_for_1997, categoryname)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Product_Sales_for_1997, productname)
END_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Product_Sales_for_1997)

BEGIN_ENTITY_CONSTRUCTOR(Orders_Qry, type_base)
    ON_PROPERTY_IN_ENTITY_CONSTRUCTOR(employeeid, 0)
    ON_PROPERTY_IN_ENTITY_CONSTRUCTOR(shipvia, 0)
    ON_PROPERTY_IN_ENTITY_CONSTRUCTOR(orderid, 0)
    ON_PROPERTY_IN_ENTITY_CONSTRUCTOR(freight, 0.0)
END_ENTITY_CONSTRUCTOR(Orders_Qry, type_base)

BEGIN_ENTITY_DESTRUCTOR(Orders_Qry)
END_ENTITY_DESTRUCTOR(Orders_Qry)

IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Orders_Qry, requireddate, RequiredDate, ::utility::datetime);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Orders_Qry, employeeid, EmployeeID, int32_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Orders_Qry, shipvia, ShipVia, int32_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Orders_Qry, customerid, CustomerID, ::utility::string_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Orders_Qry, country, Country, ::utility::string_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Orders_Qry, shipcountry, ShipCountry, ::utility::string_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Orders_Qry, orderid, OrderID, int32_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Orders_Qry, companyname, CompanyName, ::utility::string_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Orders_Qry, orderdate, OrderDate, ::utility::datetime);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Orders_Qry, address, Address, ::utility::string_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Orders_Qry, shippeddate, ShippedDate, ::utility::datetime);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Orders_Qry, shipaddress, ShipAddress, ::utility::string_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Orders_Qry, shipname, ShipName, ::utility::string_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Orders_Qry, shipcity, ShipCity, ::utility::string_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Orders_Qry, shippostalcode, ShipPostalCode, ::utility::string_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Orders_Qry, city, City, ::utility::string_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Orders_Qry, region, Region, ::utility::string_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Orders_Qry, freight, Freight, long double);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Orders_Qry, shipregion, ShipRegion, ::utility::string_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Orders_Qry, postalcode, PostalCode, ::utility::string_t);

IMPLEMENT_EDM_INFO(Orders_Qry, NorthwindModel, Orders_Qry)

BEGIN_PROPERTY_IN_ENTITY_MAPPING(Orders_Qry)
    ON_PROPERTY_IN_ENTITY_MAPPING(Orders_Qry, requireddate)
    ON_PROPERTY_IN_ENTITY_MAPPING(Orders_Qry, employeeid)
    ON_PROPERTY_IN_ENTITY_MAPPING(Orders_Qry, shipvia)
    ON_PROPERTY_IN_ENTITY_MAPPING(Orders_Qry, customerid)
    ON_PROPERTY_IN_ENTITY_MAPPING(Orders_Qry, country)
    ON_PROPERTY_IN_ENTITY_MAPPING(Orders_Qry, shipcountry)
    ON_PROPERTY_IN_ENTITY_MAPPING(Orders_Qry, orderid)
    ON_PROPERTY_IN_ENTITY_MAPPING(Orders_Qry, companyname)
    ON_PROPERTY_IN_ENTITY_MAPPING(Orders_Qry, orderdate)
    ON_PROPERTY_IN_ENTITY_MAPPING(Orders_Qry, address)
    ON_PROPERTY_IN_ENTITY_MAPPING(Orders_Qry, shippeddate)
    ON_PROPERTY_IN_ENTITY_MAPPING(Orders_Qry, shipaddress)
    ON_PROPERTY_IN_ENTITY_MAPPING(Orders_Qry, shipname)
    ON_PROPERTY_IN_ENTITY_MAPPING(Orders_Qry, shipcity)
    ON_PROPERTY_IN_ENTITY_MAPPING(Orders_Qry, shippostalcode)
    ON_PROPERTY_IN_ENTITY_MAPPING(Orders_Qry, city)
    ON_PROPERTY_IN_ENTITY_MAPPING(Orders_Qry, region)
    ON_PROPERTY_IN_ENTITY_MAPPING(Orders_Qry, freight)
    ON_PROPERTY_IN_ENTITY_MAPPING(Orders_Qry, shipregion)
    ON_PROPERTY_IN_ENTITY_MAPPING(Orders_Qry, postalcode)
END_PROPERTY_IN_ENTITY_MAPPING(Orders_Qry)

BEGIN_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Orders_Qry)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Orders_Qry, requireddate)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Orders_Qry, employeeid)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Orders_Qry, shipvia)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Orders_Qry, customerid)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Orders_Qry, country)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Orders_Qry, shipcountry)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Orders_Qry, orderid)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Orders_Qry, companyname)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Orders_Qry, orderdate)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Orders_Qry, address)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Orders_Qry, shippeddate)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Orders_Qry, shipaddress)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Orders_Qry, shipname)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Orders_Qry, shipcity)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Orders_Qry, shippostalcode)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Orders_Qry, city)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Orders_Qry, region)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Orders_Qry, freight)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Orders_Qry, shipregion)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Orders_Qry, postalcode)
END_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Orders_Qry)

BEGIN_ENTITY_CONSTRUCTOR(Category_Sales_for_1997, type_base)
    ON_PROPERTY_IN_ENTITY_CONSTRUCTOR(categorysales, 0.0)
END_ENTITY_CONSTRUCTOR(Category_Sales_for_1997, type_base)

BEGIN_ENTITY_DESTRUCTOR(Category_Sales_for_1997)
END_ENTITY_DESTRUCTOR(Category_Sales_for_1997)

IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Category_Sales_for_1997, categoryname, CategoryName, ::utility::string_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Category_Sales_for_1997, categorysales, CategorySales, long double);

IMPLEMENT_EDM_INFO(Category_Sales_for_1997, NorthwindModel, Category_Sales_for_1997)

BEGIN_PROPERTY_IN_ENTITY_MAPPING(Category_Sales_for_1997)
    ON_PROPERTY_IN_ENTITY_MAPPING(Category_Sales_for_1997, categoryname)
    ON_PROPERTY_IN_ENTITY_MAPPING(Category_Sales_for_1997, categorysales)
END_PROPERTY_IN_ENTITY_MAPPING(Category_Sales_for_1997)

BEGIN_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Category_Sales_for_1997)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Category_Sales_for_1997, categoryname)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Category_Sales_for_1997, categorysales)
END_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Category_Sales_for_1997)

BEGIN_ENTITY_CONSTRUCTOR(Order_Details_Extended, type_base)
    ON_PROPERTY_IN_ENTITY_CONSTRUCTOR(productid, 0)
    ON_PROPERTY_IN_ENTITY_CONSTRUCTOR(orderid, 0)
    ON_PROPERTY_IN_ENTITY_CONSTRUCTOR(unitprice, 0.0)
    ON_PROPERTY_IN_ENTITY_CONSTRUCTOR(discount, 0.0)
    ON_PROPERTY_IN_ENTITY_CONSTRUCTOR(quantity, 0)
    ON_PROPERTY_IN_ENTITY_CONSTRUCTOR(extendedprice, 0.0)
END_ENTITY_CONSTRUCTOR(Order_Details_Extended, type_base)

BEGIN_ENTITY_DESTRUCTOR(Order_Details_Extended)
END_ENTITY_DESTRUCTOR(Order_Details_Extended)

IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Order_Details_Extended, productid, ProductID, int32_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Order_Details_Extended, orderid, OrderID, int32_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Order_Details_Extended, unitprice, UnitPrice, long double);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Order_Details_Extended, discount, Discount, float);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Order_Details_Extended, productname, ProductName, ::utility::string_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Order_Details_Extended, quantity, Quantity, int16_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Order_Details_Extended, extendedprice, ExtendedPrice, long double);

IMPLEMENT_EDM_INFO(Order_Details_Extended, NorthwindModel, Order_Details_Extended)

BEGIN_PROPERTY_IN_ENTITY_MAPPING(Order_Details_Extended)
    ON_PROPERTY_IN_ENTITY_MAPPING(Order_Details_Extended, productid)
    ON_PROPERTY_IN_ENTITY_MAPPING(Order_Details_Extended, orderid)
    ON_PROPERTY_IN_ENTITY_MAPPING(Order_Details_Extended, unitprice)
    ON_PROPERTY_IN_ENTITY_MAPPING(Order_Details_Extended, discount)
    ON_PROPERTY_IN_ENTITY_MAPPING(Order_Details_Extended, productname)
    ON_PROPERTY_IN_ENTITY_MAPPING(Order_Details_Extended, quantity)
    ON_PROPERTY_IN_ENTITY_MAPPING(Order_Details_Extended, extendedprice)
END_PROPERTY_IN_ENTITY_MAPPING(Order_Details_Extended)

BEGIN_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Order_Details_Extended)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Order_Details_Extended, productid)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Order_Details_Extended, orderid)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Order_Details_Extended, unitprice)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Order_Details_Extended, discount)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Order_Details_Extended, productname)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Order_Details_Extended, quantity)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Order_Details_Extended, extendedprice)
END_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Order_Details_Extended)

BEGIN_ENTITY_CONSTRUCTOR(Alphabetical_list_of_product, type_base)
    ON_PROPERTY_IN_ENTITY_CONSTRUCTOR(unitsonorder, 0)
    ON_PROPERTY_IN_ENTITY_CONSTRUCTOR(productid, 0)
    ON_PROPERTY_IN_ENTITY_CONSTRUCTOR(supplierid, 0)
    ON_PROPERTY_IN_ENTITY_CONSTRUCTOR(categoryid, 0)
    ON_PROPERTY_IN_ENTITY_CONSTRUCTOR(unitprice, 0.0)
    ON_PROPERTY_IN_ENTITY_CONSTRUCTOR(discontinued, false)
    ON_PROPERTY_IN_ENTITY_CONSTRUCTOR(unitsinstock, 0)
    ON_PROPERTY_IN_ENTITY_CONSTRUCTOR(reorderlevel, 0)
END_ENTITY_CONSTRUCTOR(Alphabetical_list_of_product, type_base)

BEGIN_ENTITY_DESTRUCTOR(Alphabetical_list_of_product)
END_ENTITY_DESTRUCTOR(Alphabetical_list_of_product)

IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Alphabetical_list_of_product, unitsonorder, UnitsOnOrder, int16_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Alphabetical_list_of_product, productname, ProductName, ::utility::string_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Alphabetical_list_of_product, productid, ProductID, int32_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Alphabetical_list_of_product, quantityperunit, QuantityPerUnit, ::utility::string_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Alphabetical_list_of_product, supplierid, SupplierID, int32_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Alphabetical_list_of_product, categoryid, CategoryID, int32_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Alphabetical_list_of_product, unitprice, UnitPrice, long double);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Alphabetical_list_of_product, discontinued, Discontinued, bool);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Alphabetical_list_of_product, unitsinstock, UnitsInStock, int16_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Alphabetical_list_of_product, reorderlevel, ReorderLevel, int16_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Alphabetical_list_of_product, categoryname, CategoryName, ::utility::string_t);

IMPLEMENT_EDM_INFO(Alphabetical_list_of_product, NorthwindModel, Alphabetical_list_of_product)

BEGIN_PROPERTY_IN_ENTITY_MAPPING(Alphabetical_list_of_product)
    ON_PROPERTY_IN_ENTITY_MAPPING(Alphabetical_list_of_product, unitsonorder)
    ON_PROPERTY_IN_ENTITY_MAPPING(Alphabetical_list_of_product, productname)
    ON_PROPERTY_IN_ENTITY_MAPPING(Alphabetical_list_of_product, productid)
    ON_PROPERTY_IN_ENTITY_MAPPING(Alphabetical_list_of_product, quantityperunit)
    ON_PROPERTY_IN_ENTITY_MAPPING(Alphabetical_list_of_product, supplierid)
    ON_PROPERTY_IN_ENTITY_MAPPING(Alphabetical_list_of_product, categoryid)
    ON_PROPERTY_IN_ENTITY_MAPPING(Alphabetical_list_of_product, unitprice)
    ON_PROPERTY_IN_ENTITY_MAPPING(Alphabetical_list_of_product, discontinued)
    ON_PROPERTY_IN_ENTITY_MAPPING(Alphabetical_list_of_product, unitsinstock)
    ON_PROPERTY_IN_ENTITY_MAPPING(Alphabetical_list_of_product, reorderlevel)
    ON_PROPERTY_IN_ENTITY_MAPPING(Alphabetical_list_of_product, categoryname)
END_PROPERTY_IN_ENTITY_MAPPING(Alphabetical_list_of_product)

BEGIN_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Alphabetical_list_of_product)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Alphabetical_list_of_product, unitsonorder)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Alphabetical_list_of_product, productname)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Alphabetical_list_of_product, productid)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Alphabetical_list_of_product, quantityperunit)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Alphabetical_list_of_product, supplierid)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Alphabetical_list_of_product, categoryid)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Alphabetical_list_of_product, unitprice)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Alphabetical_list_of_product, discontinued)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Alphabetical_list_of_product, unitsinstock)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Alphabetical_list_of_product, reorderlevel)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Alphabetical_list_of_product, categoryname)
END_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Alphabetical_list_of_product)

BEGIN_ENTITY_CONSTRUCTOR(Products_by_Category, type_base)
    ON_PROPERTY_IN_ENTITY_CONSTRUCTOR(unitsinstock, 0)
    ON_PROPERTY_IN_ENTITY_CONSTRUCTOR(discontinued, false)
END_ENTITY_CONSTRUCTOR(Products_by_Category, type_base)

BEGIN_ENTITY_DESTRUCTOR(Products_by_Category)
END_ENTITY_DESTRUCTOR(Products_by_Category)

IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Products_by_Category, unitsinstock, UnitsInStock, int16_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Products_by_Category, categoryname, CategoryName, ::utility::string_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Products_by_Category, quantityperunit, QuantityPerUnit, ::utility::string_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Products_by_Category, productname, ProductName, ::utility::string_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Products_by_Category, discontinued, Discontinued, bool);

IMPLEMENT_EDM_INFO(Products_by_Category, NorthwindModel, Products_by_Category)

BEGIN_PROPERTY_IN_ENTITY_MAPPING(Products_by_Category)
    ON_PROPERTY_IN_ENTITY_MAPPING(Products_by_Category, unitsinstock)
    ON_PROPERTY_IN_ENTITY_MAPPING(Products_by_Category, categoryname)
    ON_PROPERTY_IN_ENTITY_MAPPING(Products_by_Category, quantityperunit)
    ON_PROPERTY_IN_ENTITY_MAPPING(Products_by_Category, productname)
    ON_PROPERTY_IN_ENTITY_MAPPING(Products_by_Category, discontinued)
END_PROPERTY_IN_ENTITY_MAPPING(Products_by_Category)

BEGIN_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Products_by_Category)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Products_by_Category, unitsinstock)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Products_by_Category, categoryname)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Products_by_Category, quantityperunit)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Products_by_Category, productname)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Products_by_Category, discontinued)
END_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Products_by_Category)

BEGIN_ENTITY_CONSTRUCTOR(Order_Subtotal, type_base)
    ON_PROPERTY_IN_ENTITY_CONSTRUCTOR(subtotal, 0.0)
    ON_PROPERTY_IN_ENTITY_CONSTRUCTOR(orderid, 0)
END_ENTITY_CONSTRUCTOR(Order_Subtotal, type_base)

BEGIN_ENTITY_DESTRUCTOR(Order_Subtotal)
END_ENTITY_DESTRUCTOR(Order_Subtotal)

IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Order_Subtotal, subtotal, Subtotal, long double);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Order_Subtotal, orderid, OrderID, int32_t);

IMPLEMENT_EDM_INFO(Order_Subtotal, NorthwindModel, Order_Subtotal)

BEGIN_PROPERTY_IN_ENTITY_MAPPING(Order_Subtotal)
    ON_PROPERTY_IN_ENTITY_MAPPING(Order_Subtotal, subtotal)
    ON_PROPERTY_IN_ENTITY_MAPPING(Order_Subtotal, orderid)
END_PROPERTY_IN_ENTITY_MAPPING(Order_Subtotal)

BEGIN_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Order_Subtotal)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Order_Subtotal, subtotal)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Order_Subtotal, orderid)
END_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Order_Subtotal)

BEGIN_ENTITY_CONSTRUCTOR(CustomerDemographic, type_base)
END_ENTITY_CONSTRUCTOR(CustomerDemographic, type_base)

BEGIN_ENTITY_DESTRUCTOR(CustomerDemographic)
END_ENTITY_DESTRUCTOR(CustomerDemographic)

IMPLEMENT_COLLECTION_NAVIGATION_PROPERTY_IN_ENTITY_MAPPING(CustomerDemographic, customers, Customers, Customer);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(CustomerDemographic, customertypeid, CustomerTypeID, ::utility::string_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(CustomerDemographic, customerdesc, CustomerDesc, ::utility::string_t);

IMPLEMENT_EDM_INFO(CustomerDemographic, NorthwindModel, CustomerDemographic)

BEGIN_PROPERTY_IN_ENTITY_MAPPING(CustomerDemographic)
    ON_PROPERTY_IN_ENTITY_MAPPING(CustomerDemographic, customers)
    ON_PROPERTY_IN_ENTITY_MAPPING(CustomerDemographic, customertypeid)
    ON_PROPERTY_IN_ENTITY_MAPPING(CustomerDemographic, customerdesc)
END_PROPERTY_IN_ENTITY_MAPPING(CustomerDemographic)

BEGIN_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(CustomerDemographic)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(CustomerDemographic, customertypeid)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(CustomerDemographic, customerdesc)
END_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(CustomerDemographic)

BEGIN_ENTITY_CONSTRUCTOR(Shipper, type_base)
    ON_PROPERTY_IN_ENTITY_CONSTRUCTOR(shipperid, 0)
END_ENTITY_CONSTRUCTOR(Shipper, type_base)

BEGIN_ENTITY_DESTRUCTOR(Shipper)
END_ENTITY_DESTRUCTOR(Shipper)

IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Shipper, companyname, CompanyName, ::utility::string_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Shipper, shipperid, ShipperID, int32_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Shipper, phone, Phone, ::utility::string_t);
IMPLEMENT_COLLECTION_NAVIGATION_PROPERTY_IN_ENTITY_MAPPING(Shipper, orders, Orders, Order);

IMPLEMENT_EDM_INFO(Shipper, NorthwindModel, Shipper)

BEGIN_PROPERTY_IN_ENTITY_MAPPING(Shipper)
    ON_PROPERTY_IN_ENTITY_MAPPING(Shipper, companyname)
    ON_PROPERTY_IN_ENTITY_MAPPING(Shipper, shipperid)
    ON_PROPERTY_IN_ENTITY_MAPPING(Shipper, phone)
    ON_PROPERTY_IN_ENTITY_MAPPING(Shipper, orders)
END_PROPERTY_IN_ENTITY_MAPPING(Shipper)

BEGIN_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Shipper)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Shipper, companyname)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Shipper, shipperid)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Shipper, phone)
END_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Shipper)

BEGIN_ENTITY_CONSTRUCTOR(Sales_by_Category, type_base)
    ON_PROPERTY_IN_ENTITY_CONSTRUCTOR(categoryid, 0)
    ON_PROPERTY_IN_ENTITY_CONSTRUCTOR(productsales, 0.0)
END_ENTITY_CONSTRUCTOR(Sales_by_Category, type_base)

BEGIN_ENTITY_DESTRUCTOR(Sales_by_Category)
END_ENTITY_DESTRUCTOR(Sales_by_Category)

IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Sales_by_Category, categoryid, CategoryID, int32_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Sales_by_Category, productsales, ProductSales, long double);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Sales_by_Category, categoryname, CategoryName, ::utility::string_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Sales_by_Category, productname, ProductName, ::utility::string_t);

IMPLEMENT_EDM_INFO(Sales_by_Category, NorthwindModel, Sales_by_Category)

BEGIN_PROPERTY_IN_ENTITY_MAPPING(Sales_by_Category)
    ON_PROPERTY_IN_ENTITY_MAPPING(Sales_by_Category, categoryid)
    ON_PROPERTY_IN_ENTITY_MAPPING(Sales_by_Category, productsales)
    ON_PROPERTY_IN_ENTITY_MAPPING(Sales_by_Category, categoryname)
    ON_PROPERTY_IN_ENTITY_MAPPING(Sales_by_Category, productname)
END_PROPERTY_IN_ENTITY_MAPPING(Sales_by_Category)

BEGIN_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Sales_by_Category)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Sales_by_Category, categoryid)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Sales_by_Category, productsales)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Sales_by_Category, categoryname)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Sales_by_Category, productname)
END_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Sales_by_Category)

BEGIN_ENTITY_CONSTRUCTOR(Region, type_base)
    ON_PROPERTY_IN_ENTITY_CONSTRUCTOR(regionid, 0)
END_ENTITY_CONSTRUCTOR(Region, type_base)

BEGIN_ENTITY_DESTRUCTOR(Region)
END_ENTITY_DESTRUCTOR(Region)

IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Region, regiondescription, RegionDescription, ::utility::string_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Region, regionid, RegionID, int32_t);
IMPLEMENT_COLLECTION_NAVIGATION_PROPERTY_IN_ENTITY_MAPPING(Region, territories, Territories, Territory);

IMPLEMENT_EDM_INFO(Region, NorthwindModel, Region)

BEGIN_PROPERTY_IN_ENTITY_MAPPING(Region)
    ON_PROPERTY_IN_ENTITY_MAPPING(Region, regiondescription)
    ON_PROPERTY_IN_ENTITY_MAPPING(Region, regionid)
    ON_PROPERTY_IN_ENTITY_MAPPING(Region, territories)
END_PROPERTY_IN_ENTITY_MAPPING(Region)

BEGIN_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Region)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Region, regiondescription)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Region, regionid)
END_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Region)

BEGIN_ENTITY_CONSTRUCTOR(Order, type_base)
    ON_PROPERTY_IN_ENTITY_CONSTRUCTOR(employeeid, 0)
    ON_PROPERTY_IN_ENTITY_CONSTRUCTOR(shipvia, 0)
    ON_PROPERTY_IN_ENTITY_CONSTRUCTOR(orderid, 0)
    ON_PROPERTY_IN_ENTITY_CONSTRUCTOR(freight, 0.0)
END_ENTITY_CONSTRUCTOR(Order, type_base)

BEGIN_ENTITY_DESTRUCTOR(Order)
END_ENTITY_DESTRUCTOR(Order)

IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Order, requireddate, RequiredDate, ::utility::datetime);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Order, employeeid, EmployeeID, int32_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Order, customerid, CustomerID, ::utility::string_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Order, shipcountry, ShipCountry, ::utility::string_t);
IMPLEMENT_NAVIGATION_PROPERTY_IN_ENTITY_MAPPING(Order, customer, Customer, Customer);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Order, shipvia, ShipVia, int32_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Order, orderid, OrderID, int32_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Order, orderdate, OrderDate, ::utility::datetime);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Order, shippeddate, ShippedDate, ::utility::datetime);
IMPLEMENT_NAVIGATION_PROPERTY_IN_ENTITY_MAPPING(Order, employee, Employee, Employee);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Order, shippostalcode, ShipPostalCode, ::utility::string_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Order, shipcity, ShipCity, ::utility::string_t);
IMPLEMENT_COLLECTION_NAVIGATION_PROPERTY_IN_ENTITY_MAPPING(Order, order_details, Order_Details, Order_Detail);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Order, shipname, ShipName, ::utility::string_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Order, freight, Freight, long double);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Order, shipregion, ShipRegion, ::utility::string_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Order, shipaddress, ShipAddress, ::utility::string_t);
IMPLEMENT_NAVIGATION_PROPERTY_IN_ENTITY_MAPPING(Order, shipper, Shipper, Shipper);

IMPLEMENT_EDM_INFO(Order, NorthwindModel, Order)

BEGIN_PROPERTY_IN_ENTITY_MAPPING(Order)
    ON_PROPERTY_IN_ENTITY_MAPPING(Order, requireddate)
    ON_PROPERTY_IN_ENTITY_MAPPING(Order, employeeid)
    ON_PROPERTY_IN_ENTITY_MAPPING(Order, customerid)
    ON_PROPERTY_IN_ENTITY_MAPPING(Order, shipcountry)
    ON_PROPERTY_IN_ENTITY_MAPPING(Order, customer)
    ON_PROPERTY_IN_ENTITY_MAPPING(Order, shipvia)
    ON_PROPERTY_IN_ENTITY_MAPPING(Order, orderid)
    ON_PROPERTY_IN_ENTITY_MAPPING(Order, orderdate)
    ON_PROPERTY_IN_ENTITY_MAPPING(Order, shippeddate)
    ON_PROPERTY_IN_ENTITY_MAPPING(Order, employee)
    ON_PROPERTY_IN_ENTITY_MAPPING(Order, shippostalcode)
    ON_PROPERTY_IN_ENTITY_MAPPING(Order, shipcity)
    ON_PROPERTY_IN_ENTITY_MAPPING(Order, order_details)
    ON_PROPERTY_IN_ENTITY_MAPPING(Order, shipname)
    ON_PROPERTY_IN_ENTITY_MAPPING(Order, freight)
    ON_PROPERTY_IN_ENTITY_MAPPING(Order, shipregion)
    ON_PROPERTY_IN_ENTITY_MAPPING(Order, shipaddress)
    ON_PROPERTY_IN_ENTITY_MAPPING(Order, shipper)
END_PROPERTY_IN_ENTITY_MAPPING(Order)

BEGIN_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Order)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Order, requireddate)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Order, employeeid)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Order, customerid)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Order, shipcountry)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Order, shipvia)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Order, orderid)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Order, orderdate)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Order, shippeddate)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Order, shippostalcode)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Order, shipcity)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Order, shipname)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Order, freight)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Order, shipregion)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Order, shipaddress)
END_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Order)

BEGIN_ENTITY_CONSTRUCTOR(Product, type_base)
    ON_PROPERTY_IN_ENTITY_CONSTRUCTOR(unitsonorder, 0)
    ON_PROPERTY_IN_ENTITY_CONSTRUCTOR(discontinued, false)
    ON_PROPERTY_IN_ENTITY_CONSTRUCTOR(unitsinstock, 0)
    ON_PROPERTY_IN_ENTITY_CONSTRUCTOR(categoryid, 0)
    ON_PROPERTY_IN_ENTITY_CONSTRUCTOR(productid, 0)
    ON_PROPERTY_IN_ENTITY_CONSTRUCTOR(unitprice, 0.0)
    ON_PROPERTY_IN_ENTITY_CONSTRUCTOR(supplierid, 0)
    ON_PROPERTY_IN_ENTITY_CONSTRUCTOR(reorderlevel, 0)
END_ENTITY_CONSTRUCTOR(Product, type_base)

BEGIN_ENTITY_DESTRUCTOR(Product)
END_ENTITY_DESTRUCTOR(Product)

IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Product, unitsonorder, UnitsOnOrder, int16_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Product, discontinued, Discontinued, bool);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Product, unitsinstock, UnitsInStock, int16_t);
IMPLEMENT_NAVIGATION_PROPERTY_IN_ENTITY_MAPPING(Product, supplier, Supplier, Supplier);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Product, productname, ProductName, ::utility::string_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Product, quantityperunit, QuantityPerUnit, ::utility::string_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Product, categoryid, CategoryID, int32_t);
IMPLEMENT_COLLECTION_NAVIGATION_PROPERTY_IN_ENTITY_MAPPING(Product, order_details, Order_Details, Order_Detail);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Product, productid, ProductID, int32_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Product, unitprice, UnitPrice, long double);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Product, supplierid, SupplierID, int32_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Product, reorderlevel, ReorderLevel, int16_t);
IMPLEMENT_NAVIGATION_PROPERTY_IN_ENTITY_MAPPING(Product, category, Category, Category);

IMPLEMENT_EDM_INFO(Product, NorthwindModel, Product)

BEGIN_PROPERTY_IN_ENTITY_MAPPING(Product)
    ON_PROPERTY_IN_ENTITY_MAPPING(Product, unitsonorder)
    ON_PROPERTY_IN_ENTITY_MAPPING(Product, discontinued)
    ON_PROPERTY_IN_ENTITY_MAPPING(Product, unitsinstock)
    ON_PROPERTY_IN_ENTITY_MAPPING(Product, supplier)
    ON_PROPERTY_IN_ENTITY_MAPPING(Product, productname)
    ON_PROPERTY_IN_ENTITY_MAPPING(Product, quantityperunit)
    ON_PROPERTY_IN_ENTITY_MAPPING(Product, categoryid)
    ON_PROPERTY_IN_ENTITY_MAPPING(Product, order_details)
    ON_PROPERTY_IN_ENTITY_MAPPING(Product, productid)
    ON_PROPERTY_IN_ENTITY_MAPPING(Product, unitprice)
    ON_PROPERTY_IN_ENTITY_MAPPING(Product, supplierid)
    ON_PROPERTY_IN_ENTITY_MAPPING(Product, reorderlevel)
    ON_PROPERTY_IN_ENTITY_MAPPING(Product, category)
END_PROPERTY_IN_ENTITY_MAPPING(Product)

BEGIN_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Product)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Product, unitsonorder)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Product, discontinued)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Product, unitsinstock)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Product, productname)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Product, quantityperunit)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Product, categoryid)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Product, productid)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Product, unitprice)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Product, supplierid)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Product, reorderlevel)
END_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Product)

BEGIN_ENTITY_CONSTRUCTOR(Category, type_base)
    ON_PROPERTY_IN_ENTITY_CONSTRUCTOR(categoryid, 0)
END_ENTITY_CONSTRUCTOR(Category, type_base)

BEGIN_ENTITY_DESTRUCTOR(Category)
END_ENTITY_DESTRUCTOR(Category)

IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Category, description, Description, ::utility::string_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Category, categoryid, CategoryID, int32_t);
IMPLEMENT_COLLECTION_NAVIGATION_PROPERTY_IN_ENTITY_MAPPING(Category, products, Products, Product);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Category, categoryname, CategoryName, ::utility::string_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Category, picture, Picture, std::vector<unsigned char>);

IMPLEMENT_EDM_INFO(Category, NorthwindModel, Category)

BEGIN_PROPERTY_IN_ENTITY_MAPPING(Category)
    ON_PROPERTY_IN_ENTITY_MAPPING(Category, description)
    ON_PROPERTY_IN_ENTITY_MAPPING(Category, categoryid)
    ON_PROPERTY_IN_ENTITY_MAPPING(Category, products)
    ON_PROPERTY_IN_ENTITY_MAPPING(Category, categoryname)
    ON_PROPERTY_IN_ENTITY_MAPPING(Category, picture)
END_PROPERTY_IN_ENTITY_MAPPING(Category)

BEGIN_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Category)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Category, description)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Category, categoryid)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Category, categoryname)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Category, picture)
END_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Category)

BEGIN_ENTITY_CONSTRUCTOR(Summary_of_Sales_by_Year, type_base)
    ON_PROPERTY_IN_ENTITY_CONSTRUCTOR(orderid, 0)
    ON_PROPERTY_IN_ENTITY_CONSTRUCTOR(subtotal, 0.0)
END_ENTITY_CONSTRUCTOR(Summary_of_Sales_by_Year, type_base)

BEGIN_ENTITY_DESTRUCTOR(Summary_of_Sales_by_Year)
END_ENTITY_DESTRUCTOR(Summary_of_Sales_by_Year)

IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Summary_of_Sales_by_Year, shippeddate, ShippedDate, ::utility::datetime);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Summary_of_Sales_by_Year, orderid, OrderID, int32_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Summary_of_Sales_by_Year, subtotal, Subtotal, long double);

IMPLEMENT_EDM_INFO(Summary_of_Sales_by_Year, NorthwindModel, Summary_of_Sales_by_Year)

BEGIN_PROPERTY_IN_ENTITY_MAPPING(Summary_of_Sales_by_Year)
    ON_PROPERTY_IN_ENTITY_MAPPING(Summary_of_Sales_by_Year, shippeddate)
    ON_PROPERTY_IN_ENTITY_MAPPING(Summary_of_Sales_by_Year, orderid)
    ON_PROPERTY_IN_ENTITY_MAPPING(Summary_of_Sales_by_Year, subtotal)
END_PROPERTY_IN_ENTITY_MAPPING(Summary_of_Sales_by_Year)

BEGIN_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Summary_of_Sales_by_Year)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Summary_of_Sales_by_Year, shippeddate)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Summary_of_Sales_by_Year, orderid)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Summary_of_Sales_by_Year, subtotal)
END_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Summary_of_Sales_by_Year)

BEGIN_ENTITY_CONSTRUCTOR(Customer_and_Suppliers_by_City, type_base)
END_ENTITY_CONSTRUCTOR(Customer_and_Suppliers_by_City, type_base)

BEGIN_ENTITY_DESTRUCTOR(Customer_and_Suppliers_by_City)
END_ENTITY_DESTRUCTOR(Customer_and_Suppliers_by_City)

IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Customer_and_Suppliers_by_City, relationship, Relationship, ::utility::string_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Customer_and_Suppliers_by_City, city, City, ::utility::string_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Customer_and_Suppliers_by_City, contactname, ContactName, ::utility::string_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Customer_and_Suppliers_by_City, companyname, CompanyName, ::utility::string_t);

IMPLEMENT_EDM_INFO(Customer_and_Suppliers_by_City, NorthwindModel, Customer_and_Suppliers_by_City)

BEGIN_PROPERTY_IN_ENTITY_MAPPING(Customer_and_Suppliers_by_City)
    ON_PROPERTY_IN_ENTITY_MAPPING(Customer_and_Suppliers_by_City, relationship)
    ON_PROPERTY_IN_ENTITY_MAPPING(Customer_and_Suppliers_by_City, city)
    ON_PROPERTY_IN_ENTITY_MAPPING(Customer_and_Suppliers_by_City, contactname)
    ON_PROPERTY_IN_ENTITY_MAPPING(Customer_and_Suppliers_by_City, companyname)
END_PROPERTY_IN_ENTITY_MAPPING(Customer_and_Suppliers_by_City)

BEGIN_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Customer_and_Suppliers_by_City)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Customer_and_Suppliers_by_City, relationship)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Customer_and_Suppliers_by_City, city)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Customer_and_Suppliers_by_City, contactname)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Customer_and_Suppliers_by_City, companyname)
END_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Customer_and_Suppliers_by_City)

BEGIN_ENTITY_CONSTRUCTOR(Employee, type_base)
    ON_PROPERTY_IN_ENTITY_CONSTRUCTOR(employeeid, 0)
    ON_PROPERTY_IN_ENTITY_CONSTRUCTOR(reportsto, 0)
END_ENTITY_CONSTRUCTOR(Employee, type_base)

BEGIN_ENTITY_DESTRUCTOR(Employee)
END_ENTITY_DESTRUCTOR(Employee)

IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Employee, birthdate, BirthDate, ::utility::datetime);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Employee, firstname, FirstName, ::utility::string_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Employee, title, Title, ::utility::string_t);
IMPLEMENT_COLLECTION_NAVIGATION_PROPERTY_IN_ENTITY_MAPPING(Employee, employees1, Employees1, Employee);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Employee, employeeid, EmployeeID, int32_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Employee, titleofcourtesy, TitleOfCourtesy, ::utility::string_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Employee, region, Region, ::utility::string_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Employee, city, City, ::utility::string_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Employee, address, Address, ::utility::string_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Employee, lastname, LastName, ::utility::string_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Employee, hiredate, HireDate, ::utility::datetime);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Employee, postalcode, PostalCode, ::utility::string_t);
IMPLEMENT_NAVIGATION_PROPERTY_IN_ENTITY_MAPPING(Employee, employee1, Employee1, Employee);
IMPLEMENT_COLLECTION_NAVIGATION_PROPERTY_IN_ENTITY_MAPPING(Employee, territories, Territories, Territory);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Employee, country, Country, ::utility::string_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Employee, homephone, HomePhone, ::utility::string_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Employee, extension, Extension, ::utility::string_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Employee, photopath, PhotoPath, ::utility::string_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Employee, photo, Photo, std::vector<unsigned char>);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Employee, notes, Notes, ::utility::string_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Employee, reportsto, ReportsTo, int32_t);
IMPLEMENT_COLLECTION_NAVIGATION_PROPERTY_IN_ENTITY_MAPPING(Employee, orders, Orders, Order);

IMPLEMENT_EDM_INFO(Employee, NorthwindModel, Employee)

BEGIN_PROPERTY_IN_ENTITY_MAPPING(Employee)
    ON_PROPERTY_IN_ENTITY_MAPPING(Employee, birthdate)
    ON_PROPERTY_IN_ENTITY_MAPPING(Employee, firstname)
    ON_PROPERTY_IN_ENTITY_MAPPING(Employee, title)
    ON_PROPERTY_IN_ENTITY_MAPPING(Employee, employees1)
    ON_PROPERTY_IN_ENTITY_MAPPING(Employee, employeeid)
    ON_PROPERTY_IN_ENTITY_MAPPING(Employee, titleofcourtesy)
    ON_PROPERTY_IN_ENTITY_MAPPING(Employee, region)
    ON_PROPERTY_IN_ENTITY_MAPPING(Employee, city)
    ON_PROPERTY_IN_ENTITY_MAPPING(Employee, address)
    ON_PROPERTY_IN_ENTITY_MAPPING(Employee, lastname)
    ON_PROPERTY_IN_ENTITY_MAPPING(Employee, hiredate)
    ON_PROPERTY_IN_ENTITY_MAPPING(Employee, postalcode)
    ON_PROPERTY_IN_ENTITY_MAPPING(Employee, employee1)
    ON_PROPERTY_IN_ENTITY_MAPPING(Employee, territories)
    ON_PROPERTY_IN_ENTITY_MAPPING(Employee, country)
    ON_PROPERTY_IN_ENTITY_MAPPING(Employee, homephone)
    ON_PROPERTY_IN_ENTITY_MAPPING(Employee, extension)
    ON_PROPERTY_IN_ENTITY_MAPPING(Employee, photopath)
    ON_PROPERTY_IN_ENTITY_MAPPING(Employee, photo)
    ON_PROPERTY_IN_ENTITY_MAPPING(Employee, notes)
    ON_PROPERTY_IN_ENTITY_MAPPING(Employee, reportsto)
    ON_PROPERTY_IN_ENTITY_MAPPING(Employee, orders)
END_PROPERTY_IN_ENTITY_MAPPING(Employee)

BEGIN_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Employee)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Employee, birthdate)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Employee, firstname)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Employee, title)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Employee, employeeid)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Employee, titleofcourtesy)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Employee, region)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Employee, city)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Employee, address)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Employee, lastname)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Employee, hiredate)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Employee, postalcode)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Employee, country)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Employee, homephone)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Employee, extension)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Employee, photopath)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Employee, photo)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Employee, notes)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Employee, reportsto)
END_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Employee)

BEGIN_ENTITY_CONSTRUCTOR(Order_Detail, type_base)
    ON_PROPERTY_IN_ENTITY_CONSTRUCTOR(quantity, 0)
    ON_PROPERTY_IN_ENTITY_CONSTRUCTOR(productid, 0)
    ON_PROPERTY_IN_ENTITY_CONSTRUCTOR(orderid, 0)
    ON_PROPERTY_IN_ENTITY_CONSTRUCTOR(unitprice, 0.0)
    ON_PROPERTY_IN_ENTITY_CONSTRUCTOR(discount, 0.0)
END_ENTITY_CONSTRUCTOR(Order_Detail, type_base)

BEGIN_ENTITY_DESTRUCTOR(Order_Detail)
END_ENTITY_DESTRUCTOR(Order_Detail)

IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Order_Detail, quantity, Quantity, int16_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Order_Detail, productid, ProductID, int32_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Order_Detail, orderid, OrderID, int32_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Order_Detail, unitprice, UnitPrice, long double);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Order_Detail, discount, Discount, float);
IMPLEMENT_NAVIGATION_PROPERTY_IN_ENTITY_MAPPING(Order_Detail, order, Order, Order);
IMPLEMENT_NAVIGATION_PROPERTY_IN_ENTITY_MAPPING(Order_Detail, product, Product, Product);

IMPLEMENT_EDM_INFO(Order_Detail, NorthwindModel, Order_Detail)

BEGIN_PROPERTY_IN_ENTITY_MAPPING(Order_Detail)
    ON_PROPERTY_IN_ENTITY_MAPPING(Order_Detail, quantity)
    ON_PROPERTY_IN_ENTITY_MAPPING(Order_Detail, productid)
    ON_PROPERTY_IN_ENTITY_MAPPING(Order_Detail, orderid)
    ON_PROPERTY_IN_ENTITY_MAPPING(Order_Detail, unitprice)
    ON_PROPERTY_IN_ENTITY_MAPPING(Order_Detail, discount)
    ON_PROPERTY_IN_ENTITY_MAPPING(Order_Detail, order)
    ON_PROPERTY_IN_ENTITY_MAPPING(Order_Detail, product)
END_PROPERTY_IN_ENTITY_MAPPING(Order_Detail)

BEGIN_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Order_Detail)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Order_Detail, quantity)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Order_Detail, productid)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Order_Detail, orderid)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Order_Detail, unitprice)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Order_Detail, discount)
END_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Order_Detail)

BEGIN_ENTITY_CONSTRUCTOR(Supplier, type_base)
    ON_PROPERTY_IN_ENTITY_CONSTRUCTOR(supplierid, 0)
END_ENTITY_CONSTRUCTOR(Supplier, type_base)

BEGIN_ENTITY_DESTRUCTOR(Supplier)
END_ENTITY_DESTRUCTOR(Supplier)

IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Supplier, companyname, CompanyName, ::utility::string_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Supplier, contactname, ContactName, ::utility::string_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Supplier, address, Address, ::utility::string_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Supplier, contacttitle, ContactTitle, ::utility::string_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Supplier, region, Region, ::utility::string_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Supplier, city, City, ::utility::string_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Supplier, country, Country, ::utility::string_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Supplier, supplierid, SupplierID, int32_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Supplier, postalcode, PostalCode, ::utility::string_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Supplier, fax, Fax, ::utility::string_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Supplier, phone, Phone, ::utility::string_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Supplier, homepage, HomePage, ::utility::string_t);
IMPLEMENT_COLLECTION_NAVIGATION_PROPERTY_IN_ENTITY_MAPPING(Supplier, products, Products, Product);

IMPLEMENT_EDM_INFO(Supplier, NorthwindModel, Supplier)

BEGIN_PROPERTY_IN_ENTITY_MAPPING(Supplier)
    ON_PROPERTY_IN_ENTITY_MAPPING(Supplier, companyname)
    ON_PROPERTY_IN_ENTITY_MAPPING(Supplier, contactname)
    ON_PROPERTY_IN_ENTITY_MAPPING(Supplier, address)
    ON_PROPERTY_IN_ENTITY_MAPPING(Supplier, contacttitle)
    ON_PROPERTY_IN_ENTITY_MAPPING(Supplier, region)
    ON_PROPERTY_IN_ENTITY_MAPPING(Supplier, city)
    ON_PROPERTY_IN_ENTITY_MAPPING(Supplier, country)
    ON_PROPERTY_IN_ENTITY_MAPPING(Supplier, supplierid)
    ON_PROPERTY_IN_ENTITY_MAPPING(Supplier, postalcode)
    ON_PROPERTY_IN_ENTITY_MAPPING(Supplier, fax)
    ON_PROPERTY_IN_ENTITY_MAPPING(Supplier, phone)
    ON_PROPERTY_IN_ENTITY_MAPPING(Supplier, homepage)
    ON_PROPERTY_IN_ENTITY_MAPPING(Supplier, products)
END_PROPERTY_IN_ENTITY_MAPPING(Supplier)

BEGIN_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Supplier)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Supplier, companyname)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Supplier, contactname)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Supplier, address)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Supplier, contacttitle)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Supplier, region)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Supplier, city)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Supplier, country)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Supplier, supplierid)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Supplier, postalcode)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Supplier, fax)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Supplier, phone)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Supplier, homepage)
END_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Supplier)

BEGIN_ENTITY_CONSTRUCTOR(Invoice, type_base)
    ON_PROPERTY_IN_ENTITY_CONSTRUCTOR(quantity, 0)
    ON_PROPERTY_IN_ENTITY_CONSTRUCTOR(unitprice, 0.0)
    ON_PROPERTY_IN_ENTITY_CONSTRUCTOR(discount, 0.0)
    ON_PROPERTY_IN_ENTITY_CONSTRUCTOR(productid, 0)
    ON_PROPERTY_IN_ENTITY_CONSTRUCTOR(orderid, 0)
    ON_PROPERTY_IN_ENTITY_CONSTRUCTOR(extendedprice, 0.0)
    ON_PROPERTY_IN_ENTITY_CONSTRUCTOR(freight, 0.0)
END_ENTITY_CONSTRUCTOR(Invoice, type_base)

BEGIN_ENTITY_DESTRUCTOR(Invoice)
END_ENTITY_DESTRUCTOR(Invoice)

IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Invoice, orderdate, OrderDate, ::utility::datetime);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Invoice, shippeddate, ShippedDate, ::utility::datetime);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Invoice, shipaddress, ShipAddress, ::utility::string_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Invoice, quantity, Quantity, int16_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Invoice, shipname, ShipName, ::utility::string_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Invoice, unitprice, UnitPrice, long double);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Invoice, shipregion, ShipRegion, ::utility::string_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Invoice, discount, Discount, float);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Invoice, postalcode, PostalCode, ::utility::string_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Invoice, productid, ProductID, int32_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Invoice, shippostalcode, ShipPostalCode, ::utility::string_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Invoice, customername, CustomerName, ::utility::string_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Invoice, address, Address, ::utility::string_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Invoice, salesperson, Salesperson, ::utility::string_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Invoice, shipcity, ShipCity, ::utility::string_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Invoice, country, Country, ::utility::string_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Invoice, shipcountry, ShipCountry, ::utility::string_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Invoice, orderid, OrderID, int32_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Invoice, customerid, CustomerID, ::utility::string_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Invoice, city, City, ::utility::string_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Invoice, region, Region, ::utility::string_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Invoice, extendedprice, ExtendedPrice, long double);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Invoice, shippername, ShipperName, ::utility::string_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Invoice, productname, ProductName, ::utility::string_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Invoice, requireddate, RequiredDate, ::utility::datetime);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Invoice, freight, Freight, long double);

IMPLEMENT_EDM_INFO(Invoice, NorthwindModel, Invoice)

BEGIN_PROPERTY_IN_ENTITY_MAPPING(Invoice)
    ON_PROPERTY_IN_ENTITY_MAPPING(Invoice, orderdate)
    ON_PROPERTY_IN_ENTITY_MAPPING(Invoice, shippeddate)
    ON_PROPERTY_IN_ENTITY_MAPPING(Invoice, shipaddress)
    ON_PROPERTY_IN_ENTITY_MAPPING(Invoice, quantity)
    ON_PROPERTY_IN_ENTITY_MAPPING(Invoice, shipname)
    ON_PROPERTY_IN_ENTITY_MAPPING(Invoice, unitprice)
    ON_PROPERTY_IN_ENTITY_MAPPING(Invoice, shipregion)
    ON_PROPERTY_IN_ENTITY_MAPPING(Invoice, discount)
    ON_PROPERTY_IN_ENTITY_MAPPING(Invoice, postalcode)
    ON_PROPERTY_IN_ENTITY_MAPPING(Invoice, productid)
    ON_PROPERTY_IN_ENTITY_MAPPING(Invoice, shippostalcode)
    ON_PROPERTY_IN_ENTITY_MAPPING(Invoice, customername)
    ON_PROPERTY_IN_ENTITY_MAPPING(Invoice, address)
    ON_PROPERTY_IN_ENTITY_MAPPING(Invoice, salesperson)
    ON_PROPERTY_IN_ENTITY_MAPPING(Invoice, shipcity)
    ON_PROPERTY_IN_ENTITY_MAPPING(Invoice, country)
    ON_PROPERTY_IN_ENTITY_MAPPING(Invoice, shipcountry)
    ON_PROPERTY_IN_ENTITY_MAPPING(Invoice, orderid)
    ON_PROPERTY_IN_ENTITY_MAPPING(Invoice, customerid)
    ON_PROPERTY_IN_ENTITY_MAPPING(Invoice, city)
    ON_PROPERTY_IN_ENTITY_MAPPING(Invoice, region)
    ON_PROPERTY_IN_ENTITY_MAPPING(Invoice, extendedprice)
    ON_PROPERTY_IN_ENTITY_MAPPING(Invoice, shippername)
    ON_PROPERTY_IN_ENTITY_MAPPING(Invoice, productname)
    ON_PROPERTY_IN_ENTITY_MAPPING(Invoice, requireddate)
    ON_PROPERTY_IN_ENTITY_MAPPING(Invoice, freight)
END_PROPERTY_IN_ENTITY_MAPPING(Invoice)

BEGIN_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Invoice)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Invoice, orderdate)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Invoice, shippeddate)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Invoice, shipaddress)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Invoice, quantity)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Invoice, shipname)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Invoice, unitprice)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Invoice, shipregion)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Invoice, discount)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Invoice, postalcode)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Invoice, productid)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Invoice, shippostalcode)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Invoice, customername)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Invoice, address)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Invoice, salesperson)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Invoice, shipcity)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Invoice, country)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Invoice, shipcountry)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Invoice, orderid)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Invoice, customerid)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Invoice, city)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Invoice, region)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Invoice, extendedprice)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Invoice, shippername)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Invoice, productname)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Invoice, requireddate)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Invoice, freight)
END_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Invoice)

BEGIN_ENTITY_CONSTRUCTOR(Customer, type_base)
END_ENTITY_CONSTRUCTOR(Customer, type_base)

BEGIN_ENTITY_DESTRUCTOR(Customer)
END_ENTITY_DESTRUCTOR(Customer)

IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Customer, companyname, CompanyName, ::utility::string_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Customer, region, Region, ::utility::string_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Customer, city, City, ::utility::string_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Customer, country, Country, ::utility::string_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Customer, customerid, CustomerID, ::utility::string_t);
IMPLEMENT_COLLECTION_NAVIGATION_PROPERTY_IN_ENTITY_MAPPING(Customer, customerdemographics, CustomerDemographics, CustomerDemographic);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Customer, postalcode, PostalCode, ::utility::string_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Customer, fax, Fax, ::utility::string_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Customer, phone, Phone, ::utility::string_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Customer, contactname, ContactName, ::utility::string_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Customer, address, Address, ::utility::string_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Customer, contacttitle, ContactTitle, ::utility::string_t);
IMPLEMENT_COLLECTION_NAVIGATION_PROPERTY_IN_ENTITY_MAPPING(Customer, orders, Orders, Order);

IMPLEMENT_EDM_INFO(Customer, NorthwindModel, Customer)

BEGIN_PROPERTY_IN_ENTITY_MAPPING(Customer)
    ON_PROPERTY_IN_ENTITY_MAPPING(Customer, companyname)
    ON_PROPERTY_IN_ENTITY_MAPPING(Customer, region)
    ON_PROPERTY_IN_ENTITY_MAPPING(Customer, city)
    ON_PROPERTY_IN_ENTITY_MAPPING(Customer, country)
    ON_PROPERTY_IN_ENTITY_MAPPING(Customer, customerid)
    ON_PROPERTY_IN_ENTITY_MAPPING(Customer, customerdemographics)
    ON_PROPERTY_IN_ENTITY_MAPPING(Customer, postalcode)
    ON_PROPERTY_IN_ENTITY_MAPPING(Customer, fax)
    ON_PROPERTY_IN_ENTITY_MAPPING(Customer, phone)
    ON_PROPERTY_IN_ENTITY_MAPPING(Customer, contactname)
    ON_PROPERTY_IN_ENTITY_MAPPING(Customer, address)
    ON_PROPERTY_IN_ENTITY_MAPPING(Customer, contacttitle)
    ON_PROPERTY_IN_ENTITY_MAPPING(Customer, orders)
END_PROPERTY_IN_ENTITY_MAPPING(Customer)

BEGIN_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Customer)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Customer, companyname)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Customer, region)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Customer, city)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Customer, country)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Customer, customerid)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Customer, postalcode)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Customer, fax)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Customer, phone)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Customer, contactname)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Customer, address)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Customer, contacttitle)
END_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Customer)

BEGIN_ENTITY_CONSTRUCTOR(Territory, type_base)
    ON_PROPERTY_IN_ENTITY_CONSTRUCTOR(regionid, 0)
END_ENTITY_CONSTRUCTOR(Territory, type_base)

BEGIN_ENTITY_DESTRUCTOR(Territory)
END_ENTITY_DESTRUCTOR(Territory)

IMPLEMENT_COLLECTION_NAVIGATION_PROPERTY_IN_ENTITY_MAPPING(Territory, employees, Employees, Employee);
IMPLEMENT_NAVIGATION_PROPERTY_IN_ENTITY_MAPPING(Territory, region, Region, Region);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Territory, regionid, RegionID, int32_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Territory, territorydescription, TerritoryDescription, ::utility::string_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Territory, territoryid, TerritoryID, ::utility::string_t);

IMPLEMENT_EDM_INFO(Territory, NorthwindModel, Territory)

BEGIN_PROPERTY_IN_ENTITY_MAPPING(Territory)
    ON_PROPERTY_IN_ENTITY_MAPPING(Territory, employees)
    ON_PROPERTY_IN_ENTITY_MAPPING(Territory, region)
    ON_PROPERTY_IN_ENTITY_MAPPING(Territory, regionid)
    ON_PROPERTY_IN_ENTITY_MAPPING(Territory, territorydescription)
    ON_PROPERTY_IN_ENTITY_MAPPING(Territory, territoryid)
END_PROPERTY_IN_ENTITY_MAPPING(Territory)

BEGIN_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Territory)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Territory, regionid)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Territory, territorydescription)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Territory, territoryid)
END_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Territory)

BEGIN_ENTITY_CONSTRUCTOR(Current_Product_List, type_base)
    ON_PROPERTY_IN_ENTITY_CONSTRUCTOR(productid, 0)
END_ENTITY_CONSTRUCTOR(Current_Product_List, type_base)

BEGIN_ENTITY_DESTRUCTOR(Current_Product_List)
END_ENTITY_DESTRUCTOR(Current_Product_List)

IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Current_Product_List, productname, ProductName, ::utility::string_t);
IMPLEMENT_PRIMITIVE_PROPERTY_IN_ENTITY_MAPPING(Current_Product_List, productid, ProductID, int32_t);

IMPLEMENT_EDM_INFO(Current_Product_List, NorthwindModel, Current_Product_List)

BEGIN_PROPERTY_IN_ENTITY_MAPPING(Current_Product_List)
    ON_PROPERTY_IN_ENTITY_MAPPING(Current_Product_List, productname)
    ON_PROPERTY_IN_ENTITY_MAPPING(Current_Product_List, productid)
END_PROPERTY_IN_ENTITY_MAPPING(Current_Product_List)

BEGIN_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Current_Product_List)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Current_Product_List, productname)
    ON_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Current_Product_List, productid)
END_SERIALIZE_PROPERTY_IN_ENTITY_MAPPING(Current_Product_List)


IMPLEMENT_EMPTY_DERIVED_TYPE_CREATOR_MAP(Summary_of_Sales_by_Quarter)
IMPLEMENT_EMPTY_DERIVED_TYPE_CREATOR_MAP(Sales_Totals_by_Amount)
IMPLEMENT_EMPTY_DERIVED_TYPE_CREATOR_MAP(Products_Above_Average_Price)
IMPLEMENT_EMPTY_DERIVED_TYPE_CREATOR_MAP(Product_Sales_for_1997)
IMPLEMENT_EMPTY_DERIVED_TYPE_CREATOR_MAP(Orders_Qry)
IMPLEMENT_EMPTY_DERIVED_TYPE_CREATOR_MAP(Category_Sales_for_1997)
IMPLEMENT_EMPTY_DERIVED_TYPE_CREATOR_MAP(Order_Details_Extended)
IMPLEMENT_EMPTY_DERIVED_TYPE_CREATOR_MAP(Alphabetical_list_of_product)
IMPLEMENT_EMPTY_DERIVED_TYPE_CREATOR_MAP(Products_by_Category)
IMPLEMENT_EMPTY_DERIVED_TYPE_CREATOR_MAP(Order_Subtotal)
IMPLEMENT_EMPTY_DERIVED_TYPE_CREATOR_MAP(CustomerDemographic)
IMPLEMENT_EMPTY_DERIVED_TYPE_CREATOR_MAP(Shipper)
IMPLEMENT_EMPTY_DERIVED_TYPE_CREATOR_MAP(Sales_by_Category)
IMPLEMENT_EMPTY_DERIVED_TYPE_CREATOR_MAP(Region)
IMPLEMENT_EMPTY_DERIVED_TYPE_CREATOR_MAP(Order)
IMPLEMENT_EMPTY_DERIVED_TYPE_CREATOR_MAP(Product)
IMPLEMENT_EMPTY_DERIVED_TYPE_CREATOR_MAP(Category)
IMPLEMENT_EMPTY_DERIVED_TYPE_CREATOR_MAP(Summary_of_Sales_by_Year)
IMPLEMENT_EMPTY_DERIVED_TYPE_CREATOR_MAP(Customer_and_Suppliers_by_City)
IMPLEMENT_EMPTY_DERIVED_TYPE_CREATOR_MAP(Employee)
IMPLEMENT_EMPTY_DERIVED_TYPE_CREATOR_MAP(Order_Detail)
IMPLEMENT_EMPTY_DERIVED_TYPE_CREATOR_MAP(Supplier)
IMPLEMENT_EMPTY_DERIVED_TYPE_CREATOR_MAP(Invoice)
IMPLEMENT_EMPTY_DERIVED_TYPE_CREATOR_MAP(Customer)
IMPLEMENT_EMPTY_DERIVED_TYPE_CREATOR_MAP(Territory)
IMPLEMENT_EMPTY_DERIVED_TYPE_CREATOR_MAP(Current_Product_List)
}
