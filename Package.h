#pragma once
#ifndef PACKAGE_H
#define PACKAGE_H

#include "Shipping.h"

class Package : public Shipping
{
private:
    Shipping shipment;
    double length;
    double width;
    double depth;
    double weight;
    double costPerKilogram;

public:
    // Constructors
    Package();
    Package(Shipping *_shipment, double _length, double _width, double _depth, double _weight, double _costPerKilogram);

    // Methods);
    double calculateCost();
};

#endif