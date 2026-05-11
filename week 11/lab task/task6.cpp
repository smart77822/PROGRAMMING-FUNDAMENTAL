#include <iostream>
#include <string>

using namespace std;

void fire(string arr[5][5]);

int main()
{
    string arr[5][5] = {
        {".", ".", ".", "*", "*"},
        {"*", ".", "*", ".", "*"},
        {".", "*", ".", "*", "."},
        {"*", ".", ".", ".", "*"},
        {".", ".", "*", "*", "."}};

    fire(arr);

    return 0;
}
void fire(string arr[5][5])
{
    string coordinate;
    cout << "Enter coordinate to fire torpedo(e.g. , A1, B3, E5): ";
    cin >> coordinate;

    int row = toupper(coordinate[0]) - 'A';
    int col = coordinate[1] - '1';

    if (row < 0 || row >= 5 || col < 0 || col >= 5)
    {
        cout<<"Invalid Locarion !!";
        return;
    }

    cout << "Result : ";
    if (arr[row][col] == "*")
    {
        cout << "BOOM" << endl;
    }
    else
    {
        cout << "splash" << endl;
    }
}
