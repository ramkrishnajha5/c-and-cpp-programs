#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a,b,c,d;
    while(1)
    {
      
    	printf("\n1 Addition\n");
    	printf("\n2 Substraction\n");
    	printf("\n3 Multiply\n");
    	printf("\n4 Divison\n");
    	printf("\n5 Exit\n");
    	printf("Select operation  ");
    	scanf("%d", &a);
    	switch(a)
    	{
			case 1: 
				printf("\nEnter two numbers\n");
				scanf("%d  %d",&b,&c);
				d=b+c;
				printf("Sum is %d",d);
				break;
			case 2: 
				printf("\nEnter two numbers\n");
				scanf("%d  %d",&b,&c);
				d=b-c;
				printf("Sub is %d",d);
				break;
			case 3: 
				printf("\nEnter two numbers\n");
				scanf("%d  %d",&b,&c);
				d=b*c;
				printf("Multiply is %d",d);
				break;
			case 4: 
				printf("\nEnter two numbers\n");
				scanf("%d  %d",&b,&c);
				d=b/c;
				printf("Division is %d",d);
				break;
			case 5:
				exit(1);
			default: 
				printf("Invalid choice");
      	}
		
	}
	return 0;
}

