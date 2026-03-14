#include<iostream>
using namespace std;

int main(){
    int pin, choice, balance=1000, depositAmount, withdrawAmount;
    cout<<"Enter your 4-digit PIN: ";
    cin>>pin;
    for(int i=0;i<3;i++){
        if(pin==1234){
            cout<<"LOGIN SUCCESSFUL!"<<endl;
         do{
            cout<<endl;
            cout<<"-------------------ATM Menu-------------------"<<endl;
            cout<<"1--Check Balance"<<endl;
            cout<<"2--Deposit Money"<<endl;
            cout<<"3--Withdraw Money"<<endl;
            cout<<"4--Exit"<<endl;
            cout<<"Enter your choice: ";
            cin>>choice;
            if(choice==1){
                cout<<"Your current balance is: "<<balance<<endl;
            }
            else if(choice==2){
                cout<<"Enter the amount to deposit: ";
                cin>>depositAmount;
                balance+=depositAmount;
                cout<<"Deposit successful! Your new balance is: "<<balance<<endl;
            }
            else if(choice==3){
                cout<<"Enter the amount to withdraw: ";
                cin>>withdrawAmount;
                if(withdrawAmount>balance){
                    cout<<"Insufficient funds. Your current balance is: "<<balance<<endl;
                }
                else if(withdrawAmount<=0){
                    cout<<"Invalid amount. Please enter a positive value."<<endl;
                }
                else{
                    balance-=withdrawAmount;
                    cout<<"Withdrawal successful! Your new balance is: "<<balance<<endl;
                }
                if(choice==4){
                    cout<<"Exiting the program. Goodbye!"<<endl;
                }
                else{
                    cout<<"Invalid choice. Please try again."<<endl;
                }
         }
        }
         while(choice!=4);
         cout<<"Thank you for using our ATM service!"<<endl;
              break;
        }
        else{
            cout<<"Incorrect PIN. Please try again."<<endl;
            if(i<2){
                cout<<"Enter your 4-digit PIN: ";
                cin>>pin;
            }
            else{
                cout<<"Too many failed attempts. Your account is locked."<<endl;
            }
        }
}
    return 0;
}