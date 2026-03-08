#include<iostream>
using namespace std;
int main(){
    int red, white, tulip;
    float pricered= 2.0, pricewhite=4.10, pricetulip=2.50, discount;
    cout <<"RED          Rose :";
    cin>>red;
    cout <<"WHITE        Rose :";
    cin>>white;
    cout <<"TULIP         Rose :";  
    cin>>tulip;
    float total = (red*pricered) + (white*pricewhite) + (tulip*pricetulip);
    if(total > 200){
          discount = total* 0.80;
          cout<<"Original Price: "<<total<<endl;
          cout<<"Discounted Price: "<<discount;

    }
}