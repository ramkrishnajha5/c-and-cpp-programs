#include<iostream>
using namespace std;

int main()
{
    int ran,i;

    cout<<"Enter the range of the array ";
    cin>>ran;

    int num[ran], pos = 0, value;

    cout<<endl<<"Enter the "<<ran<<" elements of array ";

    for(i=0 ; i<ran ; i++)
    {
        cin>>num[i];
    }

    cout<<"Enter the number to be searched: ";
    cin>>value;

    for(i=0 ; i<ran ; i++)
    {
        if( value == num[i])
        {
            pos = i + 1;
            break;
        }
    }

    if(pos == -1)
    {
        cout<<"The element "<<value<<" not found";
    }
    else
    {
        cout<<"The position of "<<value<<" is: "<<pos;
    }

    return 0;


}