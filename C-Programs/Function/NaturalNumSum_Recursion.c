#include<stdio.h>

int sum(int );

int main()
{
    int i,result;
    printf("Enter a positive number: ");
    scanf("%d",&i);
    result = sum(i);
    printf("\nSum of natural number between %d is %d",i,result);
    return 0;
}
int sum(int n)
{
    if(n != 0)
        return (n + sum(n-1));
    else
        return 0;
}