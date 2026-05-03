#include<iostream>
using namespace std;

int main(){
float size , cost,area, costperpound,costperfoot;
cout<<"Enter the size of Fertilizer bag in pounds :";
cin>>size;
cout<<"Enter the cost of the  bag : $";
cin>>cost;
cout<<"Enter the area in the square feet that can be covered by bag :";
cin>>area;
costperpound =  (float)cost/size;
costperfoot = (float)cost/area;
cout<<"Cost of fertilizer per Pound is :$"<<costperpound<<endl;
cout<<"Cost of fertilizer per square foot is :$"<<costperfoot;

return 0;
 
}
