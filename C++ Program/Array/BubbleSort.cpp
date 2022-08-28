#include<iostream>
using namespace std;

int main()
{
    int ran,temp,i,j;

    cout<<"Enter the range of the array ";
    cin>>ran;

    int num[ran];

    cout<<endl<<"Enter the "<<ran<<" elements of array ";

    for(i=0 ; i<ran ; i++)
    {
        cin>>num[i];
    }

    //Before Sorting
    cout<<endl<<"Before Sorting: ";
    for(i=0 ; i<ran ; i++)
    {
        cout<<"  "<<num[i];
    }

    //For Sorting
    for(i=0 ; i<ran-1 ; i++)
    {
        for(j=0 ; j<5-i-1 ; j++)
        {
            if(num[j] > num[j+1])
            {
                temp = num[j];
                num[j] = num[j+1];
                num[j+1] = temp;
            }
        }
    }

    //After Sorting
    cout<<endl<<endl<<"After Sorting: ";
    for(i=0 ; i<ran ; i++)
    {
        cout<<"  "<<num[i];
    }

    return 0;
    
}