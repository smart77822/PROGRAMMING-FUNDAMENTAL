#include<iostream>
using namespace std;

int main(){
int number, digit1,div1,digit2,div2,digit3,div3,digit4,sum;
cout<<"Enter a 4-digit number :";
cin>>number;
digit1= number%10;
div1= number/10;
digit2=div1%10;
div2 = div1/10;
digit3 = div2%10;
div3= div2/10;
digit4=div3%10;
sum= digit1+digit2+digit3+digit4;
cout<<"Sum of individual digit is :"<<sum;
return 0;
}