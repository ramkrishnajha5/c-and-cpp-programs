//Program to convert decimal into binary number
#include<stdio.h>
void binary();

int main()
{
    binary();
    return 0;
}
void binary()
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
    printf("\n The binary value is:  %ld", bin);
}
