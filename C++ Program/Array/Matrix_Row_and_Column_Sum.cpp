#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int a[3][3];
    int i, j, total=0;
    int row[3] = {0}, col[3] = {0};

    cout<<"Enetr (3*3) Matrix: ";
    for(i=0 ; i<3 ; i++)
    {
        for( j=0 ; j<3 ; j++)
        {
            cin>>a[i][j];
        }
    }

    for(i=0 ; i<3 ; i++)
    {
        for( j=0 ; j<3 ; j++)
        {
            row[i] = row[i]+a[i][j];
            col[j] = col[j]+a[i][j];
            total = total + a[i][j];
        }
    }

    cout<<"Matrix is:"<<endl<<endl;
    for(i=0 ; i<3 ; i++)
    {
        for( j=0 ; j<3 ; j++)
        {
            cout<<setw(4)<<a[i][j];
        }
        cout<<" | "<<row[i]<<endl;
    }

    cout<<"________________________"<<endl;
    for(i=0 ; i<3 ; i++)
    {
        cout<<setw(4)<<col[i];
    }
    cout<<" | "<<total;


    return 0;

}