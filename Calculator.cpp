#include <bits/stdc++.h>
using namespace std;
int main(){
    char cnt='y';
    while(cnt!='n'){
        int num1,num2;
        char op;
        cout<<"Enter Two numbers :"<<endl;
        cout<<"First number: ";
        cin>>num1;
        cout<<"Second number: ";
        cin>>num2;
        cout<<"Enter operation to be performed :";
        cin>>op;
        switch(op){
            case '+':
            cout<<"Addition :"<<num1+num2<<endl;
            break;


            case '-':
            cout<<"Subtraction :"<<num1-num2<<endl;
            break;

            case 'x':
            cout<<"Multiplication :"<<num1*num2<<endl;
            break;
            
            case '/':
            cout<<"Division :"<<num1+num2<<endl;
            break;

            default:
            cout<<"PLease enter the correct operation!!"<<endl;
            break;
        }
        cout<<"Do you want to continue type (y/n)"<<endl;
        cin>>cnt;
        if(cnt=='n'){
            cout<<"Thankyou"<<endl;
            break;
        }
        


    }
}