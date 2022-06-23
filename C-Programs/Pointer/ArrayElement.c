//program in C to store n elements in an array and print the elements using pointer. 
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the element number of array: ");
    scanf("%d",&n);
    int a[n],i;
    printf("Enter the element of array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",a + i);
    }
    
    printf("The value entered in array is: \n");
    for(i=0;i<n;i++)
    printf("Element[%d] is %d\n",i,*(a + i));
    return 0;
}