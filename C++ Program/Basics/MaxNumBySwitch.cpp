/*Finding maximum number among three numbers using switch case statemnet*/
#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enetr three numbers"<<endl;
    cin>>a>>b>>c;
    switch(a > b && a > c)
    {   
        case 0:
        break;
        case 1:
        cout<<a<<" is greater number";
    }

    switch(b > a && b > c)
    {
        case 0:
        break;
        case 1:
        cout<<b<<" is greater number";
    }

    switch(c > a && c > b)
    {
        case 0:
        break;
        case 1:
        cout<<c<<" is greater number";
    }
    return 0;

}