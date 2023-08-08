#include "Envelope.h"

// Default constructor
Envelope::Envelope() : Shipping()
{
    length = 0.0;
    width = 0.0;
    additionalCharge = 0.0;
}

// Parametrized constructor
Envelope::Envelope(Shipping *_shipment, double _length, double _width, double _additionalCharge) : Shipping(*_shipment)
{
    length = _length;
    width = _width;
    additionalCharge = _additionalCharge;
}

double Envelope::calculateCost()
{
    if (length > 25.0 || width > 30)
    {
        return (standardCost + additionalCharge);
    }
    return standardCost;
}
