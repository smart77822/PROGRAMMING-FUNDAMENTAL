#include <iostream>
using namespace std;
int sum_of_diits(int number);
bool check(int number);
int main()
{
    cout << "Enter a five Digit Number :";
    int number;
    cin >> number;
    check(number);
    

    return 0;
}
int sum_of_diits(int number)
{
    int sum = 0;
    while (number > 0)
    {
        sum += number % 10;
        number /= 10;
    }
    return sum;
}
bool check(int number)
{
    bool is_even = false;
    if (sum_of_diits(number) % 2 == 0)
    {
        is_even = true;
        cout<<"Evenish";
    }
    else{
        cout<<"Oddish";
    }
    return is_even;
}
