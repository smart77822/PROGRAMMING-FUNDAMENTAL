#include<iostream>
#include<string>
using namespace std;

int main(){
string name;
float weight, days;
cout<<"Enter the name of Person :";
cin>>name;
cout<<"Enter the target weight loss in kg :";
cin>>weight;
days = weight*15.0;
cout<<name<<" will need "<<days<<" days to lose "<<weight<<" kg of weight by following the doctor's Suggestions.";

return 0;
 
}
