# C++ Shipping Cost Calculator

This C++ program demonstrates the use of polymorphism in a simple shipping system. It uses an inheritance hierarchy with the base class `Shipping`, and two derived classes `Package` and `Envelope`.

## Class Hierarchy

1. **Person** (`Person.h` and `Person.cpp`):
   - Represents a person with name and address details.
   - Contains a constructor to initialize the person's information and a method to retrieve the address.

2. **Shipping** (`Shipping.h` and `Shipping.cpp`):
   - The base class representing a generic shipment.
   - Contains two person objects (shipper and recipient) and a standard cost for shipping.
   - Provides methods to get the shipper and recipient addresses and a virtual method `calculateCost()`.

3. **Package** (`Package.h` and `Package.cpp`):
   - Derived from `Shipping`, represents a package shipment.
   - Contains additional properties like length, width, depth, weight, and cost per kilogram.
   - Overrides the `calculateCost()` method to calculate the shipping cost based on package dimensions and weight.

4. **Envelope** (`Envelope.h` and `Envelope.cpp`):
   - Derived from `Shipping`, represents an envelope shipment.
   - Contains additional properties like length, width, and additional charge.
   - Overrides the `calculateCost()` method to calculate the shipping cost with an additional charge if the envelope size exceeds certain dimensions.

## Usage

1. Compile the provided C++ files using any C++ compiler of your choice.

2. Run the compiled executable.

3. The program will display the addresses of the shippers and recipients for each shipment in the vector and the calculated shipping cost for each shipment.

4. Finally, the program will show the total shipping cost for all shipments in the vector.

## Polymorphic Behavior

In the main function (`main.cpp`), the program uses a vector of pointers to `Shipping` objects. The vector stores both `Package` and `Envelope` objects as they are derived from the `Shipping` base class.

The program iterates over the vector and processes each shipment polymorphically by calling the virtual `calculateCost()` method. This enables the program to calculate the shipping cost for each specific shipment type (Package or Envelope) correctly.

