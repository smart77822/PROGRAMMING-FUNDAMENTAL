#include <iostream>
using namespace std;

int total_hours(int working_days, int workers);
void time_needed(int total_hour, int hours);

int main()
{
    int hours, days, workers;

    cout << "Enter Hours: ";
    cin >> hours;
    while (hours < 0 || hours > 200000)
    {
        cout << "Enter Hours in range [0 - 200000]: ";
        cin >> hours;
    }

    cout << "Enter number of days of firm: ";
    cin >> days;
    while (days < 0 || days > 20000)
    {
        cout << "Enter days in range [0 - 20000]: ";
        cin >> days;
    }

    cout << "Enter number of workers: ";
    cin >> workers;
    while (workers < 0 || workers > 200)
    {
        cout << "Enter workers in range [0 - 200]: ";
        cin >> workers;
    }

    int days_excluded = days / 10;
    int working_days = days - days_excluded;

    int total_hour = total_hours(working_days, workers);

    time_needed(total_hour, hours);

    return 0;
}

int total_hours(int working_days, int workers)
{
    return working_days * workers * 10;
}

void time_needed(int total_hour, int hours)
{
    if (total_hour >= hours)
    {
        int hoursLeft = total_hour - hours;
        cout << "Yes! " << hoursLeft << " hours left.";
    }
    else
    {
        int hoursNeeded = hours - total_hour;
        cout << "Not enough time! " << hoursNeeded << " hours needed.";
    }
}