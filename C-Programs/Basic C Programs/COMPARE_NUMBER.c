#include<stdio.h>

int main()
{
    int a,b;

    printf("Enter two number ");
    scanf("%d %d",&a,&b);
    if(a>b)
    printf("max is %d and min is %d",a,b);
    else if(b>a)
    printf("max is %d min is %d",b,a);
    else
    printf("both are equal");
    return 0;
}