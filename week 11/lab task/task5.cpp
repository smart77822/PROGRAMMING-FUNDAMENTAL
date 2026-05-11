#include <iostream>

using namespace std;
bool check(int matrix[][3]);
int main()
{
    int matrix[3][3];
    cout << "Enter Elemets of the Matrix ." << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter element at position [" << i << "] [" << j << "] :";
            cin >> matrix[i][j];
        }
    }
    if(check(matrix)){
        cout<<"dONE";
    }
    else{
        cout<<"Wrong";
    }
}
bool check(int matrix[][3])
{
    bool is_true = false;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j)
            {

                if (matrix[i][j] == 1)
                {
                    is_true = true;
                }
                else if (matrix[i][j] = 1)
                {
                    is_true = false;
                }
            }
        }
    }
    return is_true;
}