#include<iostream>
using namespace std;

int main()
{
    int ran, i, j, sa=0, spd=0, sod=0, ut=0, lt=0;

    cout<<"Enter The Row and Column: ";
    cin>>ran;

    int a[ran][ran];

    cout<<"Enter The "<<ran<<"*"<<ran<<" Matrix: ";
    for(i=0 ; i<ran ; i++)
    {
        for(j=0 ; j<ran ; j++)
        {
            cin>>a[i][j];
        }
    }

    for(i=0 ; i<ran ; i++)
    {
        for(j=0 ; j<ran ; j++)
        {
            if(i == j)
            {
                spd = spd+a[i][j];
            }
            if((i+j) == (ran-1))
            {
                sod = sod+a[i][j];
            }
            if(i <= j)
            {
                ut = ut+a[i][j];
            }
            if(i >= j)
            {
                lt = lt+a[i][j];
            }

            sa = sa+a[i][j];
        }
        
    }

    cout<<endl<<"Matrix is:"<<endl;
    for(i=0 ; i<ran ; i++)
    {
        for(j=0 ; j<ran ; j++)
        {
            cout<<"  "<<a[i][j];
        }
        cout<<endl;
    }

    cout<<"Sum Of All Elements: "<<sa<<endl;
    cout<<"Sum Of Principal Diagonal: "<<spd<<endl;
    cout<<"Sum Of Other Diagonal: "<<sod<<endl;
    cout<<"Sum Of Upper Trianguler: "<<ut<<endl;
    cout<<"Sum Of Lower Trianguler: "<<lt<<endl;

    
    return 0;

}