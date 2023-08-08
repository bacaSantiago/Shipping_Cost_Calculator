#include "Package.h"

// Default constructor
Package::Package() : Shipping()
{
    length = 0.0;
    width = 0.0;
    depth = 0.0;
    weight = 0.0;
    costPerKilogram = 0.0;
}

// Parametrized constructor
Package::Package(Shipping *_shipment, double _length, double _width, double _depth, double _weight, double _costPerKilogram) : Shipping(*_shipment)
{
    length = _length;
    width = _width;
    depth = _depth;
    weight = _weight;
    costPerKilogram = _costPerKilogram;
}

double Package::calculateCost()
{
    return (standardCost + (weight * costPerKilogram));
}