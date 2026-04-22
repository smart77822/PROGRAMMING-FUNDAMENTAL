#include <iostream>
using namespace std;
void skip_minutes(int hours, int min);
int main()
{
    int hours, min;
    cout << "Enter Hours (0 - 23) :";
    cin >> hours;
    if (hours > 23 || hours < 0)
    {
        cout << "You Entered Wrong numbers for Hours. ";
        return 1;
    }
    cout << "Enter Minutes (0 -59):";
    cin >> min;
    if (min > 59 || min < 0)
    {
        cout << "You Entered Wrong numbers for Minutes.";
        return 1;
    }
    skip_minutes(hours , min);

    return 0;
}
void skip_minutes(int hours, int min)
{
    int skiptime = 15;
    int after_skip = min + skiptime;

    if (after_skip >= 60)
    {
        hours = (hours + 1) % 24;   
        after_skip = after_skip % 60;
    }

    cout << "Hours : Minutes = " << hours << " : " << after_skip << endl;
}