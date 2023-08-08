#include "Person.h"

Person::Person()
{
    name = "n/a";
    address = "n/a";
    city = "n/a";
    state = "n/a";
    zipCode = "n/a";
}

Person::Person(string _name, string _adress, string _city, string _state, string _zipCode)
{
    name = _name;
    address = _adress;
    city = _city;
    state = _state;
    zipCode = _zipCode;
}

string Person::getAdress()
{
    return address; // Can also display city, state and zip code for better understanding of the adress
}