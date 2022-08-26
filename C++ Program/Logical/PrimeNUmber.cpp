//Prime Numbers are the numbers that have only two factors, that are, 1 and the number itself.

#include<iostream>
using namespace std;

int main()
{
    int num,i,flag = 0;

    cout<<"Enetr A Number ";
    cin>>num;

    for(i=2;i<=num/2;i++)
    {
        if(num%i == 0)
        {
            flag = 1;
            break;
        }
    }

    if(flag == 1)
    {
        cout<<num<<" is Not Prime Number";
    }

    else
    {
         cout<<num<<" is Prime Number";
    }

    return 0;


}