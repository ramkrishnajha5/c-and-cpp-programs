#include<stdio.h>

int fabonacci(int );

int main()
{
    int i,num;
    printf("Type range of fabonacci series: ");
    scanf("%d",&num);

    for(i=0;i<num;i++)
        printf("%d  ",fabonacci(i));
    
    return 0;
}
int fabonacci(int i)
{
    if (i == 0)
    {
        return 0;
    }
    else if(i == 1)
    {
        return 1;
    }
    return fabonacci(i-1) + fabonacci(i-2);
}