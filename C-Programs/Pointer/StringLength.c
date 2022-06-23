#include<stdio.h>
#define MAX 50
int length(char*);
int main()
{
    int len;
    char str[MAX];
    printf("Enter the string variable: ");
    fgets(str, MAX, stdin);
    len = length(str);
    printf("\nThe length of this string %s is %d",str,len-1);
}
int length(char *ch)
{
    int a = 0;
    while(*ch != '\0')
    {
        a++;
        ch++;
    }
    return a;
}