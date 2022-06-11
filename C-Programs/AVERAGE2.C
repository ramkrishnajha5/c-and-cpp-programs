#include<stdio.h>

int main()
{
	int i,j=0,k=0;
	float m;
	
	for(i=10;i<=500;i++)
	{
		if(i%3==0&&i%5==0&&i%12==0)
		{
			printf("%d\n",i);
			j=j+i;
			k++;
		}
	}
	m=j/k;
	printf("Average is: ");
	printf("%.2f\n",m);
	return 0;
}

