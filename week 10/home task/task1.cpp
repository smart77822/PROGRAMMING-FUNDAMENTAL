#include <iostream>
using namespace std;
int x = 10;
void function()
{
    cout << "The Value of the X is :" << x << endl;
    int x = 20;
}
int main()
{
    function();
    int x = 30;
    cout<<"The Value of x is "<<x <<endl;
    function();
}