#include<iostream>
using namespace std;

int main(){

int  i , p;
cout<<"Enter imposters :";
cin>>i;
cout<<"Enter Players :";
cin>>p;
float chance = 100 * ((float)i/p);
cout<<"Chance :"<<chance ;
return 0;
}