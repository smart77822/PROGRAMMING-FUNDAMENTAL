#include<iostream>
using namespace std;
int main(){
int charge , time , curr;
cout<<"Enter Charge (Q) in Coulombs :";
cin>>charge;
cout<<"Enter the time (t) in second :";
cin>>time;
curr = charge * time;
cout<<"The Current (I) is  :"<<curr;
return 0;
}