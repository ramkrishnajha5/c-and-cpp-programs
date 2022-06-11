#include<stdio.h>

int main()
{
	int a[3][3],i,j,k=0;
	
	printf("Enter array:\n ");
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
		{
		scanf("%d",&a[i][j]);
		if
		(i==j)
		k=k+a[i][j];
		}
	printf("Summation of the diagonal is %d",k);
	return 0;
}