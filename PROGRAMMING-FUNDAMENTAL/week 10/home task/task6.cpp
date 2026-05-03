#include <iostream>
using namespace std;
int factorial(int digit[], int count);
bool check(int fact, int num);
int main()
{
    int num, count = 0;
    cout << "Enter Number :";
    cin >> num;
    int original = num;
    int digit[20];
    while (num > 0)
    {
        digit[count] = num % 10;
        num /= 10;
        count++;
    }
    int fact = factorial(digit, count);
    if (check(fact, original))
    {
        cout << "Strong Number .";
    }
    else
    {
        cout << "Not Strong Number .";
    }
    return 0;
}
int factorial(int digit[], int count)
{
    int sum = 0;

    for (int i = 0; i < count; i++)
    {
        int f = 1;
        for (int j = 1; j <= digit[i]; j++)
        {
            f *= j;
        }
        sum += f;
    }

    return sum;
}
bool check(int fact, int original)
{
    return fact == original;
}