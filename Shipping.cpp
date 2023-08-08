#include "Shipping.h"

// Default constructor
Shipping::Shipping() : shipper(), recipient()
{
    standardCost = 0.0;
}

// Parametrized constructor
Shipping::Shipping(Person *_shipper, Person *_recipient, double _standardCost) : shipper(*_shipper), recipient(*_recipient) 
{
    standardCost = _standardCost;
}

string Shipping::getShipperAdress()
{
    return shipper.getAdress();
}

string Shipping::getRecipientAdress()
{
    return recipient.getAdress();
}