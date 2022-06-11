// array element positive, negative, zero, even and odd 
#include<stdio.h>
int main()
{
    int size,i,pos =0,neg =0,even =0,odd =0,zero =0;
    printf("Enter the size of an array: ");
    scanf("%d",&size);
    int arr[size];
    printf("\nEnter the element of Array: ");
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<size;i++)
    {
        if (arr[i] > 0)
            pos++;
        else if (arr[i] < 0)
            neg++;
        else
            zero++;

    }
    for(i=0;i<size;i++)
    {   
        if(arr[i] != 0 && arr[i] > 0)
        {
            if (arr[i]%2 == 0)
                even++;
            else
                odd++;
        }
    }   
    printf("\nPositive Number are: %d",pos);
    printf("\nNegative Number are: %d",neg);
    printf("\nZero Number are: %d",zero);
    printf("\nEven Number are: %d",even);
    printf("\nOdd Number are: %d",odd);
    
    
}
