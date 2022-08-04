#include<stdio.h>

int main()
{
	int a[7],i,max=0;
	printf("Enter 7 integer value: ");
	for(i=0;i<7;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<7;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	printf("Maximum number is %d",max);
	return 0;
}

