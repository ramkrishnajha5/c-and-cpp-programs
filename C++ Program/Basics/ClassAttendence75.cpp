#include<iostream>
using namespace std;

int main()
{
    int total_classes,attend_clesses,attend_per;
    char medical;

    cout<<"Enter the Number of classes held"<<endl;
    cin>>total_classes;

    cout<<"Enter the Number of classes attended"<<endl;
    cin>>attend_clesses;

    attend_per = (attend_clesses*100/total_classes);

    cout<<"You attended " << attend_per << "% of total classes" << endl;

    if( attend_per >= 75)
    {
        cout<<"GREAT,You are eligible for examination then you can eligible for examination"<<endl;
    }

    else
    {
        cout<<"have you madical cause Enter Y else N"<<endl;
        cin>>medical;

        if( medical == 'Y')
        {
            cout<<"Submit Your Medical application in college ASAP and You can give your examination"<<endl;
        }

        else if(medical == 'N')
        {

            if(attend_per >= 60)
            {
                cout<<"You have to pay fine 500-/ with apology latter"<<endl;
            }

            else
            {
                cout<<"You can't attend this examination"<<endl;
            }
           
        }
        
        else
        {
            cout<<"You Entered Wrong Number Try Again"<<endl;
        }


    }

    return 0;
}