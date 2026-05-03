#include<iostream>
using namespace std;

int main(){

int age, moves , average;

cout<<"Enter Age :";
cin>>age;
cout<<"Enter Moves :";
cin>>moves;
average= age/ (moves+1);
cout<<"Average Years :"<<average;

return 0;

}