#include<iostream>
using namespace std;

int main(){

int n , w , h, walls;
 cout<<"Enter Paint Area :";
cin>>n;
cout<<"Enter Width :";
cin>>w;
cout<<"Enter Height :";
cin>>h;
walls= n/(w*h);
cout <<"Walls Painted :"<<walls;

return 0;

}