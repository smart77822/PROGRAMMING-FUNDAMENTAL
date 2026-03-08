#include<iostream>
using namespace std;
int main(){
    string country;
    cout<<"Enter the name of the country: ";
    cin>>country;
    int price;
    float discount;
    cout<<"Ticket Price: ";
    cin>>price;
    if(country =="Ireland"){
        discount = price*0.95;
        cout<<"Discounted Price: "<<discount;
    } 
    else{
        discount = price*0.90;
        cout<<"Discounted Price: "<<discount;
    }
}