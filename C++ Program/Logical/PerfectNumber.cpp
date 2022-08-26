//Perfect Number is a positive integer that is equal to the sum of its proper divisors.

#include<iostream>
using namespace std;

int main()
{
    int num,sum,i;
    
    cout<<"Enetr A Number ";
    cin>>num;

    sum = 0;

    for(i=1;i<=num/2;i++)
    {
        if(num % i == 0)
        {
            sum = sum+i;
        }
    }

    if(sum == num)
    {
        cout<<num<<" is Perfect Number";
    }

    else
    {
         cout<<num<<" is not Perfect Number";
    }

    return 0;
}