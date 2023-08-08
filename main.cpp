// Coder: Alejandro Santiago Baca Eyssautier

#include "Package.h"
#include "Envelope.h"
#include <vector>

int main()
{
  vector<Shipping *> shipments;
  double totalCost = 0.0;

  // Initialize shippers and Recipients object of type Person
  Person *shipper1 = new Person("Santiago", "Tlalpan_18", "Coyoacán", "CDMX", "01589"); 
  Person *recipient1 = new Person("Marcelita", "Miramontes_29", "Coyoacán", "CDMX", "09415");

  Person *shipper2 = new Person("Hector", "Periferico_301", "Tlalpan", "CDMX", "08391"); 
  Person *recipient2 = new Person("Karen", "Cuemanco_18", "Xochimilco", "CDMX", "014782");

  Person *shipper3 = new Person("Daniel", "1602_CantonSt", "Dallas", "Texas", "75201");
  Person *recipient3 = new Person("Genaro", "312_EBroadway", "Anaheim", "California", "928205");

  Person *shipper4 = new Person("Luis", "Carrera_51_58", "Medellín", "Antioquía", "11111");
  Person *recipient4 = new Person("Jeannette", "Insurgentes_200", "Monterrey", "Nuevo_León", "64630");

  // Add some packages to the vector shipments, by initializing a shipment inside the constructor of Package with specific shipper and recipient
  shipments.push_back(new Package(new Shipping(shipper1, recipient1, 500.56), 30.50, 15.20, 5.3, 18.98, 160.0));
  shipments.push_back(new Package(new Shipping(shipper3, recipient3, 820.50), 15.35, 10.80, 9.3, 21.06, 140.0));

  // Add some envelopes to the vector shipments, by initializing a shipment inside the constructor of Envelope with specific shipper and recipient
  shipments.push_back(new Envelope(new Shipping(shipper2, recipient2, 500.56), 15.30, 32.50, 640.69));
  shipments.push_back(new Envelope(new Shipping(shipper4, recipient4, 2380.99), 26.50, 26.50, 590.69));

  // Iterator - based loop
  vector<Shipping *>:: iterator i;
  for (i = shipments.begin(); i != shipments.end(); i++)
  {
    double cost = 0.0;

    // Process each shipment pointed by 'i'
    Shipping * currentShipping = *i; 

    // Print the addresses -> (It would be better to show the city and state for better understanding of the costs)
    cout << "\nShipper Adress: " << currentShipping -> getShipperAdress() << "\nRecipient Adress: " << currentShipping -> getRecipientAdress() << endl;

    // Call the derived class function if the object is of type Package and calculate shipping cost
    if (Package *myPackage = dynamic_cast<Package *>(currentShipping)) // enable polymorphic behavior
    {
      cost = myPackage -> calculateCost();
      cout << "Package Shipping Cost: " << cost << endl;
    }
    // Call the derived class function if the object is of type Envelope and calculate shipping cost
    else if (Envelope *myEnvelope = dynamic_cast<Envelope *>(currentShipping)) // enable polymorphic behavior
    {
      cost = myEnvelope -> calculateCost();
      cout << "Envelope Shipping Cost: " << cost << endl;
    }

    // Sum all individual costs
    totalCost += cost;
  }
  
  cout << "\nTotal Shipping Cost: " << totalCost << endl;

  return 0;
}