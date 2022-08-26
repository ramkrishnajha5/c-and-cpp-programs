/*Prgram to check entered character is 
Uppercase, Lowercase, Digit or Special Symbol*/
#include<iostream>
using namespace std;

int main()
{
    char c;
    cout<<"Enter a character ";
    cin>>c;
    if( c >= 65 && c<=90)
    {
        cout<<c<<" is in Uppercase.";
    }
    else if( c>= 97 && c<= 122)
    {
        cout<<c<<" is in Lowercase.";
    }
    else if( c>= 48 && c<= 57)
    {
        cout<<c<<" is a Digit.";
    }
    else
    {
        cout<<c<<" is a Special Symbol.";
    }
    return 0;
}