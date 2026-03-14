#include<iostream>
using namespace std;
int main(){
    int r , j;
    cout<<"Enter the number of rows: ";
    cin>>r;
    for(int i=1;i<=r;i++){
        for(j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=r-1;i>=1;i--){
        for(j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}