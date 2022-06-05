/* program to find cube of a number by function we created in different type
of fuctions in these function file*/  
#include<stdio.h>

void cube();
int main()
{
    printf("before function code running\n ");
    cube();
    return 0;
}
void cube()
{
    int i,j;
    printf("take an integer number\n");
    scanf("%d",&i);

    j = i*i*i;
    printf("cube of %d is %d ",i,j);
}