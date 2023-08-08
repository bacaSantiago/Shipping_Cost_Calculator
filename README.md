# C++ Shipping Cost Calculator

This C++ program demonstrates the use of polymorphism to calculate and display shipping costs for multiple shipments. The program uses an inheritance hierarchy with the Package and Envelope classes inheriting from the base class Shipping. It also includes a Person class to represent sender and recipient information.

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

## Sample Output
```
Shipper Address: Santiago, Tlalpan_18, Coyoacán, CDMX, 01589
Recipient Address: Marcelita, Miramontes_29, Coyoacán, CDMX, 09415
Package Shipping Cost: 820.96

Shipper Address: Hector, Periferico_301, Tlalpan, CDMX, 08391
Recipient Address: Karen, Cuemanco_18, Xochimilco, CDMX, 014782
Envelope Shipping Cost: 1141.25

Shipper Address: Daniel, 1602_CantonSt, Dallas, Texas, 75201
Recipient Address: Genaro, 312_EBroadway, Anaheim, California, 928205
Package Shipping Cost: 1066.47

Shipper Address: Luis, Carrera_51_58, Medellín, Antioquía, 11111
Recipient Address: Jeannette, Insurgentes_200, Monterrey, Nuevo_León, 64630
Envelope Shipping Cost: 2381.69

Total Shipping Cost: 5409.37
```

