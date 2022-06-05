#include<stdio.h>
long binary(int);

int main()
{   int n;
    long result;
    printf("Enter the decimal value: ");
    scanf("%d",&n);
    result = binary(n);
    printf("\n The binary value is %ld",result);
    return 0;
}
long binary(int n)
{
    long r,bin=0,f=1;
    while(n != 0)
    {
        r = n%2;
        bin = bin + r * f;
        f = f*10;
        n = n/2;
    }
    return (bin);
}