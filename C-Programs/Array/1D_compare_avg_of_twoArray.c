#include<stdio.h>

int main()
{
	float a[5],b[5],m,n,x=0,y=0;
	int i;
	printf("Enter 1st array element\n");
	for(i=0;i<5;i++)
	{
		scanf("%f",&a[i]);
		x=x+a[i];
	}
	m=x/5;
	printf("1st array average is %.2f",m);
	printf("\n\n");
	printf("\nEnter 2nd array element\n");
	for(i=0;i<5;i++)
	{
		scanf("%f",&b[i]);
		y=y+b[i];

	}
	n=y/5;
	printf("2nd array average is %.2f",n);
	printf("\n\n");

	{
		if(m>n)
		printf("Large Avg %.2f 1st Array",m);
		else
		printf("Large Avg %.2f 2nd Array",n);
	}
	return 0;
}