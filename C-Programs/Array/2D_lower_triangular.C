#include<stdio.h>
int main()
{
	int i,j,x,y;
	int a[3][3];
	printf("Enter a 3*3 array\n");
   for(i=0;i<3;i++)
   {
	   for(j=0;j<3;j++)
	   {
		   scanf("%d",&a[i][j]);
	   }
   }
	x=(sizeof(a)/sizeof(a[0]));
	y=(sizeof(a)/sizeof(a[0][0]))/x;
	printf("Lower triangular matrix\n");
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			if(j>i)
			printf("0 ");
			else
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
