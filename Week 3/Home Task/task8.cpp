#include<iostream>

using namespace std;

int main(){

float vege,fruit,vegekg,fruitkg,total;
cout<<"Enter Vegetable price per kg (in coins) :";
cin>>vege;
cout<<"Enter fruit price per kg (in coins) :";
cin>>fruit;
cout<<"Enter total kilograms of vegetables :";
cin>>vegekg;
cout<<"Enter total kilograms of fruit:";
cin>>fruitkg;
total = ((vege *vegekg)+(fruit*fruitkg))/1.94;
cout<<"Total earning in rupees (RPS) :"<<total;
return 0;
 
}
