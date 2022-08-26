#include<iostream>
using namespace std;

int main(){
    int a,b,c,max;
    cout<<"Enetr three numbers"<<endl;
    cin>>a>>b>>c;
    max = ((a>b) ? ((a>c) ? a:c)  : ((b>c) ? b:c));
    cout<<"The greatest number is "<<max;
    return 0;

}