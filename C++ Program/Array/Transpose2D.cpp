#include<iostream>
using namespace std;

int main()
{
    int a[2][3], b[3][2];
    int i,j;

    cout<<"Enter The (2*3) 6 Element Of Matrix: ";

    for( i=0 ; i<2 ; i++)
    {
        for( j=0 ; j<3 ; j++)
        {
            cin>>a[i][j];
        }
    }

    for( i=0 ; i<2 ; i++)
    {
        for( j=0 ; j<3 ; j++)
        {
            b[j][i] = a[i][j];
        }
    }

    cout<<endl<<"Matrix is : "<<endl;

    for( i=0 ; i<2 ; i++)
    {
        for( j=0 ; j<3 ; j++)
        {
            cout<<a[i][j]<<"  ";
        }
        cout<<endl;
    }

    cout<<endl<<"Transpose Matrix is : "<<endl;

    for( i=0 ; i<3 ; i++)
    {
        for( j=0 ; j<2 ; j++)
        {
            cout<<b[i][j]<<"  ";
        }
        cout<<endl;
    }

    return 0;

}