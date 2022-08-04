#include<stdio.h>
void change(char *);
int main()
{
    char str[100];
    int c,ch,i;

    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);
    change(str);
    printf("Final string after change: \n");
    printf("%s\n",str);
    return 0;
}
void change(char *str)
{
    int i=0;
    while(str[i] != '\0')
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
        else if(str[i] >= 'A' && str[i] <= 'z')
        {
            str[i] = str[i] + 32;
        }
        i++;
    }
}

    