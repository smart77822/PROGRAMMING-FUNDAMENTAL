#include <iostream>
using namespace std;
int identical_Array(int M[][3], int rows);
int main()
{
    int rows;
    cout << "Enter the Number of rows :";
    cin >> rows;
    int M[rows][3];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter MaTRIX [" << i + 1 << "] [" << j + 1 << "] :";
            cin >> M[i][j];
        }
    }
    cout << "Your Matrix :" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << M[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << "Identical  rows are : " << identical_Array(M, rows);
}
int identical_Array(int M[][3], int rows)
{
    int identical = 0;
    for (int i = 0; i < rows; i++)
    {
        int temp_identical = 0;
        int temp_arr[3] = {M[i][0], M[i][1], M[i][2]};

        for (int j = 0; j < rows; j++)
        {
            bool is_identical = true;
            for (int k = 0; k < 3; k++)
            {
                if (M[j][k] != temp_arr[k])
                {
                    is_identical = false;
                }
            }
            if (is_identical)
            {
                temp_identical++;
            }
        }
        if (temp_identical > identical)
        {
            identical = temp_identical;
        }
    }
    if (identical == 1)
    {
        return 0;
    }

    return identical;
}