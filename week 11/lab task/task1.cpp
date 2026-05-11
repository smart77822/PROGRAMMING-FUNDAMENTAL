#include <iostream>
#include <string>

using namespace std;

int main()
{

    string cars[5] = {"Suzuki", "Toyota", "Nissan", "BMW", "Audi"};
    string colors[5] = {"Red", "Black", "Brown", "Blue", "Gray"};

    int data[5][5] = {
        {10, 7, 12, 10, 4},
        {18, 11, 15, 17, 2},
        {23, 19, 12, 16, 14},
        {7, 12, 16, 0, 2},
        {3, 5, 6, 2, 1}};

    cout << "\t";
    for (int i = 0; i < 5; i++)
    {
        cout << colors[i] << "\t";
    }
    cout << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << cars[i] << "\t";

        for (int j = 0; j < 5; j++)
        {
            cout << data[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}