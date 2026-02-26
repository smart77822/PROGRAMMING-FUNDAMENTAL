#include<iostream>
using namespace std;
#include<string>
int main(){
string name;
cout<<"Enter the Student's Name : ";
cin>>name;
float matric_marks , inter_marks , ecat_marks;
float aggregate;
cout<<"Enter Matriculation marks (out of 1100 ) :";
cin>>matric_marks;
cout<<"Enter Intermediate marks (out of 555  ) :";
cin>>inter_marks;
cout<<"Enter Ecat marks (out of 400 ) :";
cin>>ecat_marks;
aggregate = ((ecat_marks / 400.0)*50)+((inter_marks / 555.0 )*40)+((matric_marks /1100.0)*10);
cout<<" Aggregate Score for "<<name<<" is : "<<aggregate << "%";
return 0;
}
