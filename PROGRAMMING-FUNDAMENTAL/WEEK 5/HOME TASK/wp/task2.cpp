#include<iostream>
using namespace std;

int main(){
int num=0, sum  =0;
while(num >= 0){
    sum = sum + num;
    cout<<"Enter a number :";
    cin>>num;
}
cout<<"Sum :"<<sum<<endl;
    return 0;   
}