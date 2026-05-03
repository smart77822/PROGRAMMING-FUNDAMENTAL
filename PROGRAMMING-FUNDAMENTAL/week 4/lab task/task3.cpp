#include<iostream>
using namespace std;    
int main()    
{    
    int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    
    char op; // Changed 'operator' to 'op'
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    
    cout << "Enter second number: ";
    cin >> num2;

    if(op == '+')
    {
        cout << "Result: " << num1 + num2;
    }
    else if(op == '-')
    {
        cout << "Result: " << num1 - num2;
    }
    else if(op == '*')
    {
        cout << "Result: " << num1 * num2;
    }
    else if(op == '/')
    {
        
            cout << "Result: " << num1 / num2;
    }
    else
    {
        cout << "Invalid operator!";
    }
    
    return 0;
}