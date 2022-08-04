#include<stdio.h>
int main()
{
    char name[30];
    printf("Enter the name: ");
    fgets(name, sizeof(name),stdin);
    printf("Your Name: ");
    puts(name);
    return 0;
}
