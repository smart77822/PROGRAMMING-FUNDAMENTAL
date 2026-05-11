#include <iostream>
using namespace std;
int sum(int arr[][3], int rowsize);
int main()
{

    int rowsize;
    cout << "Enter Row Size :";
    cin >> rowsize;
    int arr[rowsize][3];
    for (int i = 0; i < rowsize; i++)
    {
        for (int j = 0; j < rowsize; j++)
        {
            cout << "Enter element at position [" << i << "] [" << j << "] :";
            cin >> arr[i][j];
        }
    }
    int sumofArray = sum(arr, rowsize);
    cout<<"Total Sum is :"<<sumofArray;

    return 0;
}
int sum(int arr[][3], int rowsize)
{
    int sum = 0;
    for (int i = 0; i < rowsize; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum += arr[i][j];
        }
    }
    return sum;
}