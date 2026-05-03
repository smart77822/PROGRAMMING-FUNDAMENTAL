#include<iostream>
using namespace std;

int main(){
int num, digit,count=0;
cout<<"Enter a number: ";
cin>>num;
cout<<"Enter a digit to search: ";
cin>>digit;

for(int i =num;i>0;i/=10){
    if(i%10==digit){
count++;
    }
}
cout<<"The digit "<<digit<<" appears "<<count<<" times in "<<num<<"."<<endl;

    return 0;
}