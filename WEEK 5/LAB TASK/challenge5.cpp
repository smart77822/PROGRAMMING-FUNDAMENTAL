#include<iostream>
using namespace std;
#include<string>
int main(){
    string username;
    int password;
    int random;
    string studentName;
     int studentAge;
     string courseName;
    cout<<"You have 3 attempts to login."<<endl;
    cout<<"Hint: The correct username is 'admin' and the correct password is 1234."<<endl;
    cout<<"Enter your username: ";  
    cin>>username;
    cout<<"Enter your password: ";
    cin>>password;
    
    
    for(int i =0;i<3;i++){
        if(username=="admin" && password==1234){
            cout<<"Login successful!"<<endl;
            do{
                cout<<endl;
                cout<<"-------------------University Management System-------------------"<<endl;
                cout<<"1--Add Student :"<<endl;
                cout<<"2--View Student :"<<endl;
                cout<<"3--Add Course :"<<endl;
                cout<<"4--Exit"<<endl;
                cout<<"Enter your choice: ";
                cin>>random;
                if(random==1){

                    cout<<"Student name: ";
                    
                    cin>>studentName;
                    cout<<"Student age: ";
                   
                    cin>>studentAge;
                }
                else if(random==2){
                    if(studentName!=""){
                        cout<<"Student name: "<<studentName<<endl;
                        cout<<"Student age: "<<studentAge<<endl;        
                    }
                    else{
                        cout<<"No student information available."<<endl;
                    }
                }
                    else if(random==3){
                        cout<<"Course name: ";
                        cin>>courseName;
                    }
                    else if(random==4){
                        cout<<"Exiting the program. Goodbye!"<<endl;
                        break;
                    }
                    else{
                        cout<<"Invalid choice. Please try again."<<endl;

                        
                    
            }
        }
            while(random !=4);
            break;
        }
        else{
            cout<<"Invalid username or password. Please try again."<<endl;
            cout<<"Enter your username: ";
            cin>>username;  
            cout<<"Enter your password: ";
            cin>>password;
          
        }

    }
}