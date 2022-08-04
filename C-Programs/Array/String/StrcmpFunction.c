#include<stdio.h>
#include<string.h>

int main()
{
    char a1[10],a2[10];
    printf("Enter 1st string element: ");
    scanf("%s",a1);

    printf("Enter 2nd string element: ");
    scanf("%s",a2);

    int result;

    result = strcmp(a1,a2);
    printf("Result = %d\n",result);

    //if string is equal strcmp() return zero if not equal then return non zero

    if(result == 0)
    {
        printf("The strings are equal");
    }
    else
    printf("The string is not equal");

    return 0;
}