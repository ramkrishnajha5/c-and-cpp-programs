#include<stdio.h>
#include<stdlib.h>
int sum(int,int,int *);
int main()
{
    int i,n1,n2,*ptr,result;
    printf("Enter element number: ");
    scanf("%d",&n1);

    ptr = (int *)(malloc(n1*sizeof(int)));

    if(ptr == NULL)
    {
        printf("Oops! Error occured memory not allocated");
        exit(0);
    }
    else
    printf("Enter the element: ");
    for(i =0;i<n1;i++)
        scanf("%d",ptr + i);

    printf("\nEnter new element number: ");
    scanf("%d",&n2);
    
    ptr = realloc(ptr, (n1+n2)*sizeof(int));
    if(ptr == NULL)
    {
        printf("Oops! Error occured memory not allocated");
        exit(0);
    }
    else
    for(i=n1;i<(n1+n2);i++)
        {
            printf("\nEnter the new element: ");
            scanf("%d",ptr + i);
        }
    result = sum(n1,n2,ptr);

    printf("\nSum of total number is %d",result);
    free(ptr);
    return 0; 
}
int sum(int n1,int n2,int *ptr)
{
    int i,sum = 0,n;
    n = n1+n2;
    for(i=0;i<n;i++)
    {
        sum += *(ptr + i);
    }
    return (sum);
}