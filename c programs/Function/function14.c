#include<stdio.h>
void binary(int);

int main()
{   int n;
    printf("Enter the decimal value: ");
    scanf("%d",&n);
    binary(n);
    return 0;
}
void binary(int n)
{
    long r,bin=0,f=1;
    while(n != 0)
    {
        r = n%2;
        bin = bin + r * f;
        f = f*10;
        n = n/2;
    }
    printf("\n The binary value is:  %ld", bin);
}