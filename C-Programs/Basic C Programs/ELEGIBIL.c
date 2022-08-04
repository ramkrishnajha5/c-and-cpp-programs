#include<stdio.h>

int main()
{
    double gpa;

    printf("Enter your gpa\n");
    scanf("%lf",&gpa);
    if(gpa<5.00)
    printf("no\n");
    else
    printf("yes");
    return 0;
}
