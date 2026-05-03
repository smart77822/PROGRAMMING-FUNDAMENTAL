#include <iostream>
using namespace std;

int main() {
    int money, endYear;
    cout<<"Enter the amount of money inherited: ";

    cin >> money ;
    cout<<"Enter the end year: ";
    cin >> endYear;

    int age = 18;

    for (int year = 1800; year <= endYear; year++) {
        if (year % 2 == 0) {
            money = money - 12000;
        } else {
            money = money - (12000 + 50 * age);
        }
        age++;
    }

    if (money >= 0) {
        cout << "Yes! He will live a carefree life and will have " << money << " dollars left." << endl;
    } else {
        cout << "He will need " << money  << " dollars to survive." << endl;
    }

    return 0;
}