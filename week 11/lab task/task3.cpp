#include <iostream>
#include <string>
using namespace std;
int blue_Toyata(int cardata[][5]);
int total_red(int cardata[][5]);
int total_nissan(int cardata[][5]);
void convert(int cardata[][5]);
int total_color(string c, int cardata[][5], string colours[]);
int main()
{
    int rowsize = 5;
    string cars[5] = {"Suzuki", "Toyota", "Nissan", "BMW", "Audi"};
    string colours[5] = {"Red", "Black", "Brown", "Blue", "Grey"};
    int cardata[5][5] = {{10, 7, 12, 10, 4},
                         {18, 11, 15, 17, 2},
                         {23, 19, 12, 16, 14},
                         {7, 12, 16, 0, 2},
                         {3, 5, 6, 2, 1}};

    cout << blue_Toyata(cardata) << endl;
    cout << total_red(cardata) << endl;
    cout << total_nissan(cardata) << endl;
    convert(cardata);
    string c;
    cout << "Enter colours :";
    cin >> c;
    while (c != "Red" && c != "Black" && c != "Brown" && c != "Blue" && c != "Grey")
    {
        cout << "Enter Red / Black / Brown / Blue /Grey :";
        cin >> c;
    }
    cout<<total_color(c , cardata , colours);

    return 0;
}
int blue_Toyata(int cardata[][5])
{
    cout << "Blue Toyata Cars :";
    return cardata[1][3];
}
int total_red(int cardata[][5])
{
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (j == 0)
            {
                sum += cardata[i][0];
            }
        }
    }
    cout << "Total Red Cars :";
    return sum;
}
int total_nissan(int cardata[][5])
{
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i == 2)
            {
                sum += cardata[2][j];
            }
        }
    }
    cout << "Total Nissan Cars :";
    return sum;
}
void convert(int cardata[][5])
{
    for (int i = 0; i < 5; i++)

    {
        for (int j = 0; j < 5; j++)
        {
            cout << cardata[j][i] << "\t";
        }

        cout << endl;
    }
}
int total_color(string c, int cardata[][5], string colours[])
{
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (colours[j] == c)
            {
                sum = sum + cardata[i][j];
            }
        }
    }
    return sum;
}