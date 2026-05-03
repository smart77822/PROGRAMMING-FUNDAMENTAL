#include <iostream>
using namespace std;

string numberToWords(int n)
{
    string ones[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine",
                     "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen",
                     "seventeen", "eighteen", "nineteen"};

    string tens[] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};

    if (n < 20)
        return ones[n];
    else
    {
        int t = n / 10;
        int o = n % 10;

        if (o == 0)
            return tens[t];
        else
            return tens[t] + " " + ones[o];
    }
}

int main()
{
    int num;
    cout << "Enter number (0-99): ";
    cin >> num;

    if (num < 0 || num > 99)
    {
        cout << "Invalid input";
        return 1;
    }

    cout << numberToWords(num);

    return 0;
}