#include<iostream>
using namespace std;

int main(){
    int salary = 10000, laptop = 50000;
    float monthlyAdvance = salary * 0.5;
    float total = monthlyAdvance * 6;

    if(total >= laptop){
        cout << "Ali can buy the laptop";
    }
    else{
        cout << "Months required to buy laptop: " << laptop / monthlyAdvance;
    }

    return 0;
}