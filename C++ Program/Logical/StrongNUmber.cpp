//Strong number is a special number whose sum of the factorial of digits is equal to the original number.

#include<iostream>
using namespace std;

int main()
{
    int num,sum,i,r,x,f;

    cout<<"Enetr A Number ";
    cin>>num;

    x = num;
    sum = 0;

    while (num != 0)
    {
        r = num % 10;
        f = 1;

        for (i=1;i<=r;i++)
        {
            f = f * i;
        }

        sum = sum + f;
        num = num/10;

    }

    if(sum == x)
    {
        cout<<x<<" is a Strong Number.";
    }

    else
    {
        cout<<x<<" is not a Strong Number.";
    }
    
    return 0;
}