#include<stdio.h>

int main()
{
	int i,j,k=0;
	
	for(i=1;i<=6;i++)
	{
		for(j=1;j<=i;j++)
		{
			k=i*j;
			printf("%d ",k);
		}
		printf("\n");
	}
	return 0;
}
