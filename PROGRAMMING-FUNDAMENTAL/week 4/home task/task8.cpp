#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter number (0-100): ";
    cin>>num;
    if(num<0){
        cout<<"Invalid number";
    }
        else if(num>100){
            cout<<"Invalid number";
        }
       else if(num==0){
            cout<<"Zero";
        }
      else if (num==1){
            cout<<"One";
        }
        else if(num==2){
            cout<<"Two";
        }
        else if(num==3){
            cout<<"Three";
        }
        else if(num==4){
            cout<<"Four";
        }
        else if(num==5){
            cout<<"Five";
        }
        else if(num==6){
            cout<<"Six";
        }
        else if(num==7){
            cout<<"Seven";
        }
        else if(num==8){
            cout<<"Eight";
        }
        else if(num==9){
            cout<<"Nine";
        }
        else if(num==10){
            cout<<"Ten";
        }
        else if(num==11){
            cout<<"Eleven";
        }
        else if(num==12){
            cout<<"Twelve";
        }
        else if(num==13){
            cout<<"Thirteen";
        }
        else if(num==14){
            cout<<"Fourteen";
        }
        else if(num==15){
            cout<<"Fifteen";
        }
        else if(num==16){
            cout<<"Sixteen";
        }
        else if(num==17){
            cout<<"Seventeen";
        }
        else if(num==18){
            cout<<"Eighteen";
        }
        else if(num==19){
            cout<<"Nineteen";
        }
        else if(num==100){
            cout<<"One Hundred";
        }
       else{
        int tens = num / 10;
        int ones = num % 10;
        string result;
        if(tens==2){
            result = "Twenty";
        }
        else if(tens==3){
            result = "Thirty";
        }
        else if(tens==4){
            result = "Forty";
        }
        else if(tens==5){
            result = "Fifty";
        }
        else if(tens==6){
            result = "Sixty";
        }
        else if(tens==7){
            result = "Seventy";
        }
        else if(tens==8){
            result = "Eighty";
        }
        else if(tens==9){
            result = "Ninenty";
        }
         if(ones==1){
            result += " One";
        }
        else if(ones==2){
            result += " Two";
        }
        else if(ones==3){
            result += " Three";
        }
        else if(ones==4){
            result += " Four";
        }
        else if(ones==5){
            result += " Five";
        }
        else if(ones==6){
            result += " Six";
        }
        else if(ones==7){
            result += " Seven";
        }
        else if(ones==8){
            result += " Eight";
        }
        else if(ones==9){
            result += " Nine";
        }
        cout<<result;
       }
       
        return 0;
      }
    