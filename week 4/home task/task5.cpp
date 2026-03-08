#include<iostream>
using namespace std;
int main(){
int holidays;
cout<<"Holidays : ";
cin>>holidays;
int working_days = 365 - holidays;
int time = working_days * 63 + holidays * 127;
int time_difference = 30000 - time;
float hour = time_difference / 60.0;
int hours = time_difference / 60;
        int minutes = time_difference % 60;
if(holidays  <100){
    cout<<"Toms Sleep well"<<endl;
   cout << hours << " hours and " << minutes << " minutes less for play" << endl;
}
    else{
    cout<<"Toms will run away"<<endl;
cout << hours << " hours and " << minutes << " minutes more for play" << endl;
    }
    
    return 0;
}