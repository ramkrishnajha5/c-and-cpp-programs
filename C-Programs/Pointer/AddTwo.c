// program in C to add two numbers using call by reference.
#include<stdio.h>
void sum(int*, int*);
int main()
{
    int a,b;
    printf("Enter two numbers for adding: ");
    scanf("%d %d",&a, &b);
    sum(&a, &b);
    return 0;
}
void sum(int*ptr1, int*ptr2)
{
    printf("Sum is %d",*ptr1+*ptr2);
}