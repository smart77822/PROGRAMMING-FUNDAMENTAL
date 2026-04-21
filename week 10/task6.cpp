
#include <iostream>
#include <cmath>
using namespace std;
void Square_Root(int number);
int main()
{
    int number;
    cout << "Enter the  Number :";
    cin >> number;
cout<<"The Square root of "<<number<< " is :";
    Square_Root(number);
    return 0;
}
void Square_Root(int number)
{
    cout << sqrt(number);
}