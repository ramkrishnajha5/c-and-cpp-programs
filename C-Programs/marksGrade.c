#include<stdio.h>
int main()
{
    int a,b,c,d,e,m;

    printf("Enter marks of every subject: ");
    scanf(" %d %d %d %d %d",&a,&b,&c,&d,&e);
    m == (a+b+c+d+e)/500;
    if(m>=60)
    printf("First\n");
    else if(m>=45)
    printf("Second\n");
    else
    printf("Fail\n");
    return 0;
}
