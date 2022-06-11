#include<stdio.h>
int main()
{
    int n,s,d,o;
    printf("Enter a three digit number: ");
    scanf(" %d",&n);
    o=n;
    s=0;
    d=n%10;
    s=(s*10)+d;
    n=n/10;
    d=n%10;
    s=(s*10)+d;
    n=n/10;
    d=n%10;
    s=(s*10)+d;
    if(s==o)
    printf("Palindrome number");
    else
    printf("Not Palindrome number");
    return 0;
}