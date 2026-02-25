#include<iostream>
using namespace std;

int main(){

int minutes , fps , frames ;
cout<<"Enter Minutes :";
cin>>minutes;
cout<<"Enter fps :";
cin>>fps;
frames = fps * minutes * 60;
cout<<"Total Framas :"<<frames;
return 0;
}