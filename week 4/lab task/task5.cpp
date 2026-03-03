#include<iostream>
using namespace std;
int main(){
    string name1, name2, name3;
    int age1, age2, age3;
    cout << "Enter name of first brother : ";
    cin >> name1;
    cout<<"Ebter age of first brother : ";
    cin >> age1;
    cout << "Enter name of second brother : ";
    cin >> name2;
    cout<<"Ebter age of second brother : ";
    cin >> age2;
    cout << "Enter name of third brother : ";
    cin >> name3;
    cout<<"Ebter age of third brother : ";
    cin >> age3;
    if(age1 > age2 && age1 > age3)
    {
        cout << name1 << " is the oldest brother.";
    }
    else if(age2 > age1 && age2 > age3)
    {
        cout << name2 << " is the oldest brother.";
    }
    else if(age3 > age1 && age3 > age2)
    {
        cout << name3 << " is the oldest brother.";
    }
    else
    {
        cout << "There is no oldest brother.";
    }
}