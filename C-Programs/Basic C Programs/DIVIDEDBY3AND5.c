#include<stdio.h>

int main()
{
    int a;
    printf("To check number is devided by 3 and 5 or not\n");
    printf("Enter a number: ");
    scanf(" %d",&a);
    if(a%3==0&&a%5==0)
    printf("yes");
    else
    printf("no");
    return 0;
}