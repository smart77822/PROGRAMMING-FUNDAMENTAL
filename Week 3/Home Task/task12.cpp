#include<iostream>
using namespace std;

int main() {
    int n, width, hight, walls;
    cout <<"Number of square meters you can paint: ";
    cin >>n;
    cout <<"Width of the single wall (in meters): ";
    cin >>width;
    cout <<"Height of the single wall (in meters): ";
    cin >>hight;
    walls = n / (width * hight);
    cout <<"Number of walls you can paint: " << walls ;
    return 0;
}