#include<stdio.h>

int main()
{
    double x,y,z,avg;
    printf("Enter three number: ");
    scanf("%lf %lf %lf",&x,&y,&z);
    avg=(x+y+z)/3;
    printf("Average is %.2lf\n",avg);
    return 0;
}