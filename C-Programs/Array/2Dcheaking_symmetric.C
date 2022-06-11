#include<stdio.h>

int main()
{
	int a[20][20],b[20][20],i,j,m,n,f=0;
	
	printf("Enter the same rows and coulmn: ");
	scanf("%d %d",&m,&n);
	printf("Enter a square matrix\n");
	for(i=0;i<m;i++)
	for(j=0;j<n;j++)
	    {
			scanf("%d",&a[i][j]);
	    }
	printf("matrix is\n");
	for(i=0;i<m;i++)
	{
	   for(j=0;j<n;j++)
	   {
	       printf("%d\t",a[i][j]);
	   }
	   printf("\n");
	}
	for(i=0;i<m;i++)
	{
	    for(j=0;j<n;j++)
	    {
	       b[i][j]=a[j][i];
	    }
	}
	printf("\n Transpose matrix\n");
	for(i=0;i<m;i++)
	{
	    for(j=0;j<n;j++)
	    {
	    	printf("%d\t",b[i][j]);
	    }
	    printf("\n");
	}
	for(i=0;i<m;i++)
	{
	   for(j=0;j<n;j++)
	   {
		if(a[i][j]!=b[i][j])
		{
		    f=1;
		    break;
		}
	   }
	}
	if(f==0)
	{
	    printf("symmetric");
	}
	else
	{
	    printf("Not symmetric");
	}
	return 0;
}
