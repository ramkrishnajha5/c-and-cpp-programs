//program in C to find the maximum number between two numbers using a pointe

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a, b, *ptr1, *ptr2;
    ptr1 = &a;
    ptr2 = &b;
    printf("Enter the first number: ");
    scanf("%d",ptr1);
    printf("\nEnter the second number: ");
    scanf("%d",ptr2);
    

    if(*ptr1 > *ptr2)
    {
        printf("\n%d is greater number.",*ptr1);
        printf("\n%d is smallaer number.",*ptr2);
    }
    else
       printf("\n%d is greater number.",*ptr2);
       printf("\n%d is smallaer number.",*ptr1);
    return 0;
}