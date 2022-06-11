#include<stdio.h>

int main()
{
    int n;

    printf("Enter a Number ");
    scanf("%d",&n);
    if(n>0)
    printf("Positive Number");
    else if(n==0)
    printf("Zero");
    else
    printf("Negative Number");
    return 0;
}
