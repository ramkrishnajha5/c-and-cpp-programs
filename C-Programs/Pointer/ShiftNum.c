#include<stdio.h>
void swap(int *,int *,int *);
int main()
{
    int a,b,c;
    printf("Enter value of A B C: ");
    scanf("%d %d %d",&a,&b,&c);
    swap(&a, &b, &c);
    return 0;
}
void swap(int *m,int *n,int *o)
{
    int num1 = 0,num2 = 0;
    num1 = *m;
    *m = *o;
    num2 = *n;
    *n = num1;
    *o = num2;
    printf("\nAfter Swapping \n");
    printf("value of A is %d\n",*m);
    printf("value of B is %d\n",*n);
    printf("value of C is %d",*o);
}