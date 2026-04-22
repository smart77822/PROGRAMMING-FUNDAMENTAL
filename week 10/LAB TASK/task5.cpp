#include <iostream>
#include <cmath>
using namespace std;
void power(int number1, int number2);
int main()
{
    int number1, number2;
    cout << "Enter the Base Number :";
    cin >> number1;
    cout << "Enter the Exponent :";
    cin >> number2;
    cout << number1 << " raised to power " << number2 << " is :";
    power(number1, number2);
    return 0;
}
void power(int number1, int number2)
{
    cout << pow(number1, number2);
}