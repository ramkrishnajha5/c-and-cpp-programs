#include<stdio.h>

int main()
{
    int i,j=0;
    
    for(i=5;i<=25;i++)
    {
	    j=j+(i*i);
    }
    printf("%d\n",j);
    return 0;
}