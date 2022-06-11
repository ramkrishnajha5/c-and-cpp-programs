#include<stdio.h>

int main()
{
	int a[20][20],i,j,m,n;
	
	printf("Enter the rows and columns: ");
	scanf("%d %d",&m,&n);
	printf("Enter the matrix\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Matrix is\n");
	for(i=0;i<m;i++)
	{
	   for(j=0;j<n;j++)
	   {
		printf("%d\t",a[i][j]);
	   }
	   printf("\n");
	}
	printf("Transpose of the matrix\n");
	for(i=0;i<n;i++)
	{
	for(j=0;j<m;j++)
	{
		printf("%d\t",a[j][i]);
	}
	printf("\n");
	}
	return 0;
}
