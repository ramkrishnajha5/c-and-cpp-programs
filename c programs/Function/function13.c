#include<stdio.h>
long binary();

int main()
{   long l;
    l = binary();
    printf("\n The binary value is:  %ld", l);
    return 0;
}
long binary()
{
    long n,r,bin=0,f=1;
    printf("Enter a decimal value: ");
    scanf("%d",&n);
    while(n != 0)
    {
        r = n%2;
        bin = bin + r * f;
        f = f*10;
        n = n/2;
    }
    return (bin);
}