#include <iostream>
#include <string>

using namespace std;

float taxCalculator(char type, float price);

int main()
{
    char type;
    float price;
    string typeName;

    cout << "Enter Vehicle Type Code (M/E/S/V/T): ";
    cin >> type;
    cout << "Enter Vehicle Price: ";
    cin >> price;

    if (type == 'M')
        typeName = "Motorcycle";
    else if (type == 'E')
        typeName = "Electric";
    else if (type == 'S')
        typeName = "Sedan";
    else if (type == 'V')
        typeName = "Van";
    else if (type == 'T')
        typeName = "Truck";

    float taxAmount = taxCalculator(type, price);
    float finalPrice = price + taxAmount;

    cout << "The final price on a vehicle of type " << typeName
         << " after adding the tax is $" << finalPrice << endl;

    return 0;
}

float taxCalculator(char type, float price)
{
    float taxRate = 0;

    if (type == 'M')
        taxRate = 6.0;
    else if (type == 'E')
        taxRate = 8.0;
    else if (type == 'S')
        taxRate = 10.0;
    else if (type == 'V')
        taxRate = 12.0;
    else if (type == 'T')
        taxRate = 15.0;

    return price * (taxRate / 100.0);
}