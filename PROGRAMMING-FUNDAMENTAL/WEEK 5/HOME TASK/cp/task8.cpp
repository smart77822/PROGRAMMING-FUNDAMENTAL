#include<iostream>
using namespace std;

int main(){
int age,price_of_machine,toys_prise;
cout<<"Enter the age of the Lilly: ";
cin>>age;
cout<<"Enter the price of the Washing machine: ";
cin>>price_of_machine;
cout<<"Enter the unit  price of each toy: ";
cin>>toys_prise;
int money_count=0;
int toys_count=0;
int count=1;
for(int i=2;i<=age;i+=2){
    money_count=money_count+(10*count-1);
count++;
}
for(int i=1;i<=age;i+=2){
    toys_count++;
}
int toys_money=toys_count*toys_prise;
int total_money=money_count+toys_money;
if(total_money>=price_of_machine){
    cout<<"Yes! "<<endl<<total_money-price_of_machine<<" is left."<<endl;
}else{
    cout<<"No! "<<endl<<price_of_machine-total_money<<" is needed."<<endl;
}

    return 0;
}