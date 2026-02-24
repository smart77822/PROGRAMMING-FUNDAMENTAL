#include<iostream>
using namespace std;

int main(){
float MB , bits;
cout<<"Enter the size of megabytes (MB) :";
cin>>MB;
bits = MB * 8388608;
cout<<MB <<" is equivalent  to : " <<bits<<" bits .";

return 0;
}
