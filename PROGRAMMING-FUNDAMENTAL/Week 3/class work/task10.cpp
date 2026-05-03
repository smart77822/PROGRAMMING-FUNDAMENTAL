#include<iostream>
using namespace std;

int main(){
int win,winpoint=3, draw , drawpoint=1, loss, losspoint=0;
cout<<"Enter the number of wins :";
cin>>win;
cout<<"Enter the number of draws :";
cin>>draw;
cout<<"Enter the number of losses :";
cin>>loss;
int points= (win*winpoint)+(loss * losspoint ) + (draw * drawpoint );
cout<<"PAKISTAN   has obtained " << points <<" points  in Asia Cup Tournament.";

return 0;
}
