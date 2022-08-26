//Armstrong number is a number that is equal to the sum of cubes of its digits.

#include<iostream>
using namespace std;

int main()
{
    int num,sum,temp,x;

    cout<<"Enetr A Number ";
    cin>>num;

    x = num;
    sum = 0;
    
    while (num != 0)
    {
        temp = (num%10);
        sum = sum+ (temp*temp*temp);
        num = num/10;

    }

    if(sum == x)
    {
        cout<<x <<" is Armstrong Number";
    }

    else
    {
         cout<<x <<" is not Armstrong Number";
    }

    return 0;
}