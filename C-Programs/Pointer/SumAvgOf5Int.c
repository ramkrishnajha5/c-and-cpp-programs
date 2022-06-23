#include<stdio.h>
#include<stdlib.h>
void sumavg(int a[],int*,int*);
int main()
{
    int a[5],i,sum=0,avg=0;
    
    printf("Enter the 5 integer values: ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    sumavg(a,&sum,&avg);
    printf("Sum of 5 integer value is %d\n",sum);
    printf("Average of 5 integer is %d",avg);
    return 0;
}
void sumavg(int a[5],int*m,int*n)
{
     int i;
     for(i=0;i<5;i++)
     {
        *m += a[i];
     }
     *n = *m/5;
}