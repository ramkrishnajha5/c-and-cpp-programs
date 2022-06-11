//occurrence of random array element
#include<stdio.h>
int main()
{
	int size,i,m,n = 0;
	printf("Enter the size of array: ");
	scanf("%d",&size);

	int arr[size];
	printf("\n\nEnter the %d element of array: ",size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\n\nEnter the array element to know: ");
	scanf("%d",&m);
	for(i=0;i<size;i++)
	{
		if(arr[i] == m)
		{
			n++;
		}
	}
	printf("\n\n%d Occured %d times.",m,n);
}