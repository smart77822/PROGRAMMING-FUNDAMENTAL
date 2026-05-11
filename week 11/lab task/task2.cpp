#include <iostream>
#include <string>
using namespace std;
void printcar(int cardata[][5], string cars[], int rowsize);
int main()

{
    int rowsize = 5;
    string cars[5] = {"Suzuki", "Toyota", "Nissan", "BMW", "Audi"};
    string colour[5] = {"Red", "Black", "Brown", "Blue", "Grey"};
    int cardata[5][5] = {{10, 7, 12, 10, 4},
                         {18, 11, 15, 17, 2},
                         {23, 19, 12, 16, 14},
                         {7, 12, 16, 0, 2},
                         {3, 5, 6, 2, 1}};
    cout << "\t";
    for (int i = 0; i < 5; i++)
    {
        cout << colour[i] << "\t";
    }
    cout << endl;
    printcar(cardata, cars, rowsize);
    return 0;
}
void printcar(int cardata[][5], string cars[], int rowsize)
{
    for (int i = 0; i < 5; i++)
    {
        cout << cars[i] << "\t";
        
            for (int j = 0; j < 5; j++)
            {
                cout << cardata[i][j] << "\t";
            }
        
        cout << endl;
    }
}