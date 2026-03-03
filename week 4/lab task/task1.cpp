#include<iostream>
using namespace std;    
int main()    
{    
      int bill;
      float discount;
      cout<<"Enter the bill amount: ";
      cin>>bill;
      if(bill<=5000)
      {
          discount = bill * 0.95;
          cout<<"DISCOUNTED BILL IS : "<<discount;
      }
      else
      {
        discount = bill * 0.90;
          cout<<"DISCOUNTED BILL IS : "<<discount;
      }
    return 0;    
}