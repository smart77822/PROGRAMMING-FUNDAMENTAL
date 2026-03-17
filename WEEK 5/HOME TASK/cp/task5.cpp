#include<iostream>
using namespace std;

int main(){
int num,mod, sum=0;
cout<<"Enter a number: ";   
cin>>num;

for (int i = num; i > 0; i /= 10) {
     mod=i%10;
     sum+=mod;
}
cout<<"The sum of digits in "<<num<<" is "<<sum<<"."<<endl;
    return 0;
}