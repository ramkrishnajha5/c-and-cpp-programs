#include<stdio.h>

int main()
{
	int a[10][10],b,c,i,j,e=0,o=0,p,q;
	
	printf("enter row ");
	scanf("%d",&b);
	printf("enter coulmn ");
	scanf("%d",&c);
	printf("Enter matrix\n");
	for(i=0;i<b;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<b;i++)
	{
		for(j=0;j<c;j++)
		{
			if(a[i][j]%2==0)
			e++;
			else
			o++;
		}
	}
	printf("All prime number is: ");
	for(i=0;i<b;i++)
	{
		for(j=0;j<c;j++)
		{
			p=2;
			q=1;
			while(p<a[i][j])
			{
				if(a[i][j]%p==0)
				{
					q=0;
					break;
				}
				p++;
			}
			if(q==1)
			{
				printf(" %d ",a[i][j]);
			}

		}
	}
	printf("\neven number in array; %d ",e);
	printf("\nodd number in array: %d ",o);
	return 0;
}


