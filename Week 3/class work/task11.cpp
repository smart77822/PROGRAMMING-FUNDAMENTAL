#include<iostream>
using namespace std;

int main(){

int current_population , birth_per_month , three_decades;
cout<<"Enter the current world Population :";
cin>>current_population;
cout<<"Enter the monthly birth rate (number of birth per months) :";
cin>>birth_per_month;
three_decades= (birth_per_month * 12) * 30+ current_population;
cout<<"Population in three decades will be :"<<three_decades;

return 0;
}