#include<stdio.h>
int main()
{
    char str[30];
    char c;
    int freq=0;
    printf("Enter word: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter frequency character: ");
    scanf("%c",&c);

    for(int i=0;str[i] != '\0';i++)
    {
        if(str[i] == c)
        {
            freq++;
        }
    }
    printf("Frequency of %c: %d",c,freq);
    return 0;
}