#pragma once
#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

class Person
{
private:
    string name;
    string address;
    string city;
    string state;
    string zipCode;

public:
    // Constructors
    Person();
    Person(string _name, string _adress, string _city, string _state, string _zipCode);

    // Methods
    string getAdress();
};

#endif