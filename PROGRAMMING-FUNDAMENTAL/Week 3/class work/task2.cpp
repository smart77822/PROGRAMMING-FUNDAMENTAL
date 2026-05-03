#include<iostream>
using namespace std;

int main(){
float  weight_convert ,weight_in_lb , weight_in_kg;
weight_convert=0.45;
cout<<"Enter Weight in pounds :";
cin>>weight_in_lb;
weight_in_kg=weight_convert *weight_in_lb;
cout<<weight_in_lb<<" Pounds is equal to " <<weight_in_kg <<" Kilorams";

return 0;
}
