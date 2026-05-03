#include<iostream>
using namespace std;

int main() {
int num;
cout << "Enter a number: ";
cin >> num;
int count = 0;
for(int i =num;i>0;i/=10){
    count++;
}
cout << "Number of digits in " << num << " is: " << count;

    return 0;
}