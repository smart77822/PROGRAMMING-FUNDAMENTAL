#include <iostream>
using namespace std;
void largest_column(int arr[][5], int rows);
void print_array(int arr[][5], int rows);


int main()
{
    int arr[3][5];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << "Enter MaTRIX [" << i + 1 << "] [" << j + 1 << "] :";
            cin >> arr[i][j];
        }
    }
     for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << arr[i][j]<< " ";
        }
        cout<<endl;
    }
    largest_column(arr, 3);
    cout<<endl<<endl; 
    cout << "Sorted Array :";
    print_array(arr, 3);
}

void largest_column(int arr[][5], int rows)
{
    int largestcolumn = 0;
    int largestsum = 0;
    // sum of first column
    for (int i = 0; i < 3; i++)
    {
        largestsum += arr[i][0];
    }
    for (int col = 1; col < 5; col++)
    {
        int sum = 0;
        for (int row = 0; row < rows; row++)
        {
            sum += arr[row][col];
        }
        if (sum > largestsum)
        {
            largestsum = sum;
            largestcolumn = col;
        }
    }
    for (int i = 0; i < rows; i++)
    {
        int temp = arr[i][0];
        arr[i][0] = arr[i][largestcolumn];
        arr[i][largestcolumn] = temp;
    }
}

void print_array(int arr[][5], int rows){
    for(int i =0 ; i <rows ; i++){
        for(int j = 0 ; j < 5 ; j++){
            cout <<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}