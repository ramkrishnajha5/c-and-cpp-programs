//A palindromic number is a number that is the same when written forwards or backwards.

#include<iostream>
using namespace std;

int main()
{
    long int num,temp,x,rev;

    //Taking input from user
    cout<<"Enetr A Number ";
    cin>>num;

    x = num;
    rev = 0;
    //logic to check number is palindrome or not
    while (num != 0)
    {
        temp = (num%10);
        rev = (rev*10) + temp;
        num = num/10;

    }

    if(rev == x)
    {
        cout<<x <<" is Palindrome Number";
    }

    else
    {
         cout<<x <<" is not Palindrome Number";
    }

    return 0;
    
}