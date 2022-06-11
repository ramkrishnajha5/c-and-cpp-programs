#include<stdio.h>
int main()
{
    int n,d,s;

    printf("Enter a three digit number ");
    scanf("%d",&n);
    s=0;
    d=n%10;
    s=(s*10)+d;
    n=n/10;
    d=n%10;
    s=(s*10)+d;
    n=n/10;
    d=n%10;
    s=(s*10)+d;
    n=n/10;
    printf("reverse number is %d",s);
    return 0;
}

