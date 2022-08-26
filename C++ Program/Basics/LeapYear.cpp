#include<iostream>
using namespace std;

int main(){
    int year;
    cout<<"Enter a Year:- ";
    cin>>year;
    //Condition applying//
    if(year % 400 == 0){
        cout<< year <<" is Leap Year";
    }
    else if(year % 4 == 0 && year % 100 != 0){
        cout<< year <<" is Leap Year";
    }
    else{
        cout<< year <<" is not Leap Year";
    }
    return 0;
}