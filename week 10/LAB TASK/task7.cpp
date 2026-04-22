#include <iostream>
#include <cmath>

using namespace std;
float calculation(int angle, int distance);
int main()
{
    int distance, angle;
    cout << "Enter the distance from the base of the tree (in feet ) : ";
    cin >> distance;
    cout << "Enter the angle of elevation :( in degree ) ";
    cin >> angle;
    cout << "The height of the tree is :" << calculation(angle, distance) << endl;
}
float calculation(int angle, int distance)
{
    float angle_convert = angle * 0.01746242;
    float tan_variable = tan(angle_convert);
    float height = distance * tan_variable;
    return height;
}
