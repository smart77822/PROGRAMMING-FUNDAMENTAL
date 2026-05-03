#include<iostream>
using namespace std;
    int main()
    {
        int num, digit;
        cout << "Enter  number: ";
        cin >> num;
        cout << "Enter Digit: ";
        cin >> digit;
        int count=0;
        for(int i =num; i>0;i=i/10)
        {
            if(i%10==digit)
            {
                count++;
            }
        }
        cout << "Frequency of " << digit << " in " << num << " is: " << count << endl;
            return 0;
    }