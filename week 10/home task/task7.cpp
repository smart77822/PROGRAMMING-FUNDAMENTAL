#include <iostream>
using namespace std;
float calculate_balance(float balance, int percent_interest);
int main()
{
    int percent_interest, years;
    float balance;
    cout << "Enter Balance :";
    cin >> balance;
    if (balance < 0)
    {
        cout << "You Entered Negative Digit .";
        return 1;
    }
    cout << "Enter Years :";
    cin >> years;
    if (balance < 10000)
    {
        percent_interest = 5;
    }
    else if (balance >= 10000 && balance <= 50000)
    {
        percent_interest = 7;
    }
    else
    {
        percent_interest = 10;
    }
    if (years >= 3)
    {
        percent_interest += 2;
    }
    int updated_bal = calculate_balance(balance, percent_interest);
    cout<<"Updaated Balance :"<<updated_bal;
    return 0;
}
float calculate_balance(float balance, int percent_interest)
{
    float updated_balance = float((percent_interest * balance / 100.0) + balance);
    return updated_balance;
}