#include<iostream>
using namespace std;
#include<string>
int main(){
 string figure;
cout<<"Enter figure : ";
cin>>figure;
float sides;
cout<<"Enter sides : ";
if(figure == "square"){  
    cin>>sides;
    float area = sides * sides;
    cout<<"Area of square : "<<area;
}
else if(figure == "rectangle"){
    cin>>sides;
    cout<<"Enter another side : ";
    float another_side;
    cin>>another_side;
    float area = sides * another_side;
    cout<<"Area of rectangle : "<<area;
}
else if(figure == "circle"){
    cin>>sides;
    float area = 3.14 * sides * sides;  
    cout<<"Area of circle : "<<area;
}
else if(figure == "triangle"){
    cin>>sides;
    cout<<"Enter height : ";
    float height;
    cin>>height;
    float area = 0.5 * sides * height;
    cout<<"Area of triangle : "<<area;
}   
else{
    cout<<"Invalid figure"; 
}
        
    return 0;
}