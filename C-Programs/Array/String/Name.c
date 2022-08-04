#include<stdio.h>
int main()
{
    char name[20];
    printf("Enter the name: ");
    scanf("%s", name);
    /*space between name will not count rest of the part because
    scanf function reads the sequence of characters until it encounters whitespace*/ 
    
    printf("The name is %s.",name);
    return 0;
}