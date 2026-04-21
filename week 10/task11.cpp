#include <iostream>
using namespace std;

bool digit_check(int digit);

void condition(int digit)
{
    if (digit_check(digit))
    {
        cout << "First and last digits are same";
    }
    else
    {
        cout << "First and last digits are NOT same";
    }
}

int main()
{
    int digit;
    cout << "Enter three-digit number: ";
    cin >> digit;

    if (digit >= 100 && digit < 1000)
    {
        condition(digit);  // pass value
    }
    else
    {
        cout << "You entered wrong digits.";
    }

    return 0;
}

bool digit_check(int digit)
{
    int last = digit % 10;
    int first = digit / 100;
    return first == last;  // cleaner
}