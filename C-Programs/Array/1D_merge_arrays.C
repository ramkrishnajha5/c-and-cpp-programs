//Merge of two different array element in another array
#include<stdio.h>
int main()
{
	int a[5],b[5],c[10],i,j=0;
	
	printf("Enter 5 numbers of first array: ");
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
	printf("Enter 5 numbers of second array: ");
	for(i=0;i<5;i++)
		scanf("%d",&b[i]);
	for(i=0;i<5;i++)
	{
		c[j]=a[i];
		j++;
	}
	for(i=0;i<5;i++)
	{
		c[j]=b[i];
		j++;
	}
	printf("Marge array is: ");
	for(i=0;i<10;i++)
	{
	printf(" %d ",c[i]);
	}
	return 0;
}