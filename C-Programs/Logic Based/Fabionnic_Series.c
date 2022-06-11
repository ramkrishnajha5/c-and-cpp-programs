#include<stdio.h>

int main()
{
    int i,j=0,k=1,l;
    printf("Enter the limit N \n");
    scanf("%d",&i);
    printf("Fabionnic Sequence is: ");
    while(j<i)
    {
	 
	 l=j;
	 j=k;
	 k=k+l;
     printf("%d ",j);
    }
    return 0;
}