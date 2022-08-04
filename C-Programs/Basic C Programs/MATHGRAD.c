#include<stdio.h>
int main()
{
int n;
printf("Enter math number");
scanf("%d",&n);
if(n>=80)
printf("A+");
else if(n>=60)
printf("A");
else if(n>=45)
printf("B+");
else if(n>=30)
printf("B");
else
printf("F");
return 0;
}