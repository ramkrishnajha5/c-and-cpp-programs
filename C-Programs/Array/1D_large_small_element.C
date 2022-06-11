//c program of finding the largest and smallest element of array
#include<stdio.h>
int main()
{
	int size,i,big,small;
	
	printf("Enter the size of array: ");
	scanf("%d",&size);
	int a[size];
	printf("Enter the element of array: ");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
		big=a[0];
	}
	for(i=0;i<size;i++)
		{
			if(big < a[i])
			{
				big = a[i];
			}
		}
		printf("the largest number is  %d\n",big);

		small = a[0];
		for(i=0;i<size;i++)
		{
			if(small>a[i])
			{
				small=a[i];
			}
		}
		printf("the smallest element is  %d",small);
		return 0;
	
}
