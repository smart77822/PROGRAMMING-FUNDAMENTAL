#include <iostream>
using namespace std;
int multiply(int number);

int main()
{
    int number;
    cout << "Enter Number :";
    cin >> number;
    cout << " After Multiply :" << multiply(number) << endl;
    return 0;
}
int multiply(int number)
{
    return number * 5;
}