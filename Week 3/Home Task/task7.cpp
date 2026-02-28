#include<iostream>
#include<string>
using namespace std;

int main(){
string name;
int adult, child,adultticket,childticket,charity,total,donation,remaining;
cout<<"Enter the Movie Name :";
cin>>name;
cout<<"Enter the adult ticket price :$";
cin>>adult;
cout<<"Enter the child ticket price :$";
cin>>child;
cout<<"Enter the number of adults tickets sold :";
cin>>adultticket;
cout<<"Enter the number of child tickets sold :";
cin>>childticket;
cout<<"Enter the Percentage of the amount to be donated to charity :";
cin>>charity;
cout<<"----------------------------------------------------------"<<endl;
total= (adult*adultticket)+(child*childticket);
donation=total/charity;
remaining  = total -donation;
cout<<"Movie :"<<name<<endl;
cout<<"Total amount generated from ticket sales :$"<<total<<endl;
cout<<"Donation to charity ("<<charity<<"%) :$"<<donation<<endl;
cout<<"Remaining amount after donation :$"<<remaining<<endl;
return 0;
 
}
