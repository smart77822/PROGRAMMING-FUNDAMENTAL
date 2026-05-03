#include<iostream>
using namespace std;
int  main(){
int num1,num2;
cout<<"Enter the first number: ";
cin>>num1;
cout<<"Enter the second number: ";
cin>>num2;
int lcm, gcd;
int i;
if(num1>num2){
    i=num1;
}else{
    i=num2;    
}
for(i;i>=1;i--){
    if(num1%i==0 && num2%i==0){
        gcd=i;
        lcm=(num1*num2)/gcd;
        break;
    }
}
cout<<"the GCD of "<<num1<<" and "<<num2<<" is: "<<gcd<<endl;
cout<<"the LCM of "<<num1<<" and "<<num2<<" is: "<<lcm<<endl;

    return 0;
}
