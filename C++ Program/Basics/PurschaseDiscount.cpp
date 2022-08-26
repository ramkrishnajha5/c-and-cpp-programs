/*Discount of 10% on purchase of 1000 or above and 20% discount on 5000 or above*/
#include<iostream>
using namespace std;

int main()
{
    int amount, dis_amount;
    cout << "Enter the purchasd amount" <<endl;
    cin>> amount;

    if(amount < 1000)
    {
        
        cout << "There are no purchase of 1000 or more discount not applicable!" << endl;
        cout << "Final Cost = " <<amount;

    }

    else if ((amount >= 1000) && (amount < 5000)) 
    {

        cout<<"wow! 10% discount applied  ";
        dis_amount = (amount - amount*10/100);
        cout<<"Final Cost = "<<dis_amount;


    }

    else 
    {

        cout<<"wow! 20% discount applied  ";
        dis_amount = (amount - amount*20/100);
        cout<<"Final Cost = "<<dis_amount;
        
    }

    return 0;
    

}