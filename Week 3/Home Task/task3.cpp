#include<iostream>
using namespace std;

int main(){

int initial, final,time,acceleration;
cout<<"Enter Initial Velocity (m/s):";
cin>>initial;
cout<<"Enter Acceleration (m/s^2):";
cin>>acceleration;
cout<<"Enter Time :";
cin>>time;
final =(acceleration * time) + initial;
cout<<"Final Velcity (m/s) :"<<final;

return 0;
 
}
