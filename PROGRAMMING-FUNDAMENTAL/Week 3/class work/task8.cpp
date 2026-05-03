#include<iostream>
using namespace std;

int main(){
float volt , current , power;
cout<<"Enter voltage (in volts) :";
cin>>volt;
cout<<"Enter Current (in Amperes ) :";
cin>>current;
power = volt * current;
cout<< "The Power is " <<power << "Watt.";

return 0;
}
