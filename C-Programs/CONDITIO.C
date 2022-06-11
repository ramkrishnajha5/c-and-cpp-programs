#include<stdio.h>

int main()
{
     int n,i;
     
     printf("Take an integer number ");
     scanf("%d",&n);
     if(n==-1)
     {
	    printf("choose another integer number");
     }
     else if(n>-32)
     {
	    for(i=n;i>=-32;i--)
	    printf("%d ",i);
     }
     else
     {
	    for(i=n;i<=-32;i++)
	    printf("%d ",i);
     }
     printf("\n");
     return 0;
}
