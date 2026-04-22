#include <iostream>
#include <windows.h>
using namespace std;
void sleep();
int main()
{

    while (true)
    {
        cout << "Name :";
       sleep();
    }
    return 0;
}
void sleep(){
    Sleep(2000);
}