#include<stdio.h>

int main()
{
	int a[5],i,e=0,o=0;
	
	printf("Take 5 integer values: ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]%2==0)
		e=e+a[i];
		else
		o=o+a[i];
	}
	printf("Value in array: ");
	for(i=0;i<5;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\nSum of odd values: %d\n",o);
	printf("\nSum of even values: %d\n",e);
	return 0;
}