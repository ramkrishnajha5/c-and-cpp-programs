/*Arithmatic operation using switch case statement*/
#include<iostream>
using namespace std;

int main()
{
    char op;
    int a,b,res;
    cout<<"Enter two numbers "<<endl;
    cin>>a >> b;
    cout<<"Enter a opration(+, -, *, /, %) ";
    cin>>op;
    switch (op)
    {
        case '+':
        res = a + b;
        cout<<a  <<" "<< op <<" "<< b <<" = "<<res;
        break;

        case '-':
        res = a - b;
        cout<<a  <<" "<< op <<" "<< b <<" = "<<res;
        break;

        case '*':
        res = a * b;
        cout<<a  <<" "<< op <<" "<< b <<" = "<<res;
        break;

        case '/':
        res = a / b;
        cout<<a  <<" "<< op <<" "<< b <<" = "<<res;
        break;

        case '%':
        res = a % b;
        cout<<a  <<" "<< op <<" "<< b <<" = "<<res;
        break;
        
        default:
        cout<<"Wrong choice";
        break;
    }
    
    return 0;
}