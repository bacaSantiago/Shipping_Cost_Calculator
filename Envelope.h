#pragma once
#ifndef ENVELOPE_H
#define ENVELOPE_H

#include "Shipping.h"

class Envelope : public Shipping
{
private:
    double length;
    double width;
    double additionalCharge;

public:
    // Constructors
    Envelope();
    Envelope(Shipping *_shipment, double _length, double _width, double _additionalCharge);

    // Methods
    double calculateCost();
};

#endif
