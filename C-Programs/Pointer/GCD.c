//GCD = Greatest common divisor
#include<stdio.h>
void calculate_gcd(int, int, int *);
int main()
{
    int i,j,gcd;
    printf("Enter two numbers: ");
    scanf("%d %d",&i,&j);
    calculate_gcd(i, j, &gcd);
    printf("Greatest common divisor is: %d",gcd);
    return 0;
}
void calculate_gcd(int i,int j,int *gcd)
{
    int temp,num;
    if (i == 0)
        *gcd = j;
    else if(j == 0)
        *gcd = i;
    else
        num = i/j;

    temp = i-num*j;

    while(temp)
    {
        i = j;
        j = temp;
        num = i/j;
        temp = i-num*j;
    }
    *gcd = j;

}