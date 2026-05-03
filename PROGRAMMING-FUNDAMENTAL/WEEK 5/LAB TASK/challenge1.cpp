#include<iostream>
using namespace std;
int main()
{
int table1=24, table2 = 50, table3 = 29;
cout<<"Multiplication Table of " << table1 << endl;
for (int i = 1; i <= 10; i++)
{   
     cout << table1 << " x " << i << " = " << table1 * i << endl;
    }
cout<<"\nMultiplication Table of " << table2 << endl;
for (int i = 1; i <= 10; i++)
{  
      cout << table2 << " x " << i << " = " << table2 * i << endl;
    }
cout<<"\nMultiplication Table of " << table3 << endl;
for (int i = 1; i <= 10; i++)  
{  
      cout << table3 << " x " << i << " = " << table3 * i << endl;
    }
    return 0;
}