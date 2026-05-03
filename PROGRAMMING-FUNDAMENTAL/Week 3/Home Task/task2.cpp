#include<iostream>
using namespace std;

int main(){
int minute,second,frames;
cout<<"Number in minutes :";
cin>>minute;
cout<<"Frames per second :";
cin>>second;
frames = minute*second* 60;
cout<<"Total number of frames :"<<frames;

return 0;
}
