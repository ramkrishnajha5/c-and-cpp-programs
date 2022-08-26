#include<iostream>
using namespace std;

int main()
{
    int a,b,c,i,hcf,lcm;

    cout<<"Enter Two Numbers ";
    cin>>a>> b;

    if(a<b)
    {
        c = a;
    }

    else
    {
        c = b;
    }

    for(i=1 ; i<=c ; i++)
    {
        if ((a%i == 0) && (b%i == 0))
        {
            hcf = i;
        }
        
    }

    cout<<"HCF of given number is "<<hcf<<endl;

    lcm =(a * b)/hcf;

    cout<<"LCM of given number is "<<lcm;

    return 0;
}