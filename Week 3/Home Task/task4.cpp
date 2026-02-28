#include<iostream>
using namespace std;

int main(){

int i, p ,chance;
cout<<"Enter Imposter count :";
cin>>i;
cout<<"Enter player count :";
cin>>p;
chance= ((float)i/p)*100;
cout<<"Chance of being an imposter :"<<chance<<" %";
return 0;
 
}
