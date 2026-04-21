#include <iostream>
#include <cmath>
using namespace std;
void minimum(int number1, int number2);
int main()
{
    int number1, number2;
    cout << "Enter NUMBER 1 :";
    cin >> number1;
    cout << "Enter Number 2 :";
    cin >> number2;
    cout << "Minimum Number is :";
    minimum(number1, number2);
    return 0;
}
void minimum(int number1, int number2)
{
    cout << min(number1, number2);
}