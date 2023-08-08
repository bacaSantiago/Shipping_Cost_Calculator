#pragma once
#ifndef SHIPPING_H
#define SHIPPING_H

#include "Person.h"
#include <string>
#include <iostream>
using namespace std;

class Shipping
{
protected:
    Person shipper;
    Person recipient;
    double standardCost;

public:
    // Constructors
    Shipping();
    Shipping(Person *_shipper, Person *_recipient, double _standardCost);

    // Methods
    string getShipperAdress();
    string getRecipientAdress();
    virtual double calculateCost() { return 0.0; } // virtual with a default implementation, therefore, instantiable 
};

#endif