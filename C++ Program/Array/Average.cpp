//Finding the average of array

#include<iostream>
using namespace std;

int main()
{
    int ran,i;

    cout<<"Enter the range of the array ";
    cin>>ran;

    float a[ran],sum = 0,avg;

    cout<<endl<<"Enter the "<<ran<<" elements of array ";

    for(i=0 ; i<ran ; i++)
    {
        cin>>a[i];
    }

    for(i=0 ; i<ran ; i++)
    {
        sum = sum + a[i];
    }

    cout<<"Sum of total elements is "<<sum<<endl;

    avg = sum/ran;

    cout<<"The average is "<<avg;

    return 0;

}