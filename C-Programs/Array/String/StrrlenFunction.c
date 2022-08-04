//strlen function defined in string.h header file will count length of string
#include<stdio.h>
#include<string.h>
int main()
{
    char n[20];
    printf("Write a name(without taking space): ");
    scanf("%s",n);
    printf("\nLength of name is %zu",strlen(n));
    return 0;
}