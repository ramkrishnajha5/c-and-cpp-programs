//arranged array element in ascending order
#include<stdio.h>

int main()
{
	int i,j,a,n;
	
	printf("Enter the element of array: ");
	scanf("%d",&n);
	int num[n];
	printf("Enter the numbers\n");
	for(i=0;i<n;i++)
		scanf("%d",&num[i]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if (num[i]>num[j])
			{
				a=num[i];
				num[i]=num[j];
				num[j]=a;
			}
		}
	}
	printf("the numbers arranged in ascending order are given below\n");
	for(i=0;i<n;i++)
	printf("%d\n",num[i]);
	return 0;
}