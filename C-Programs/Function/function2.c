#include<stdio.h>
void cube(int);
int main()
{
    int i;
    printf("takes an integer value\n");
    scanf("%d",&i);
    cube (i);
    return 0;
}
void cube(int i)
{
    printf("the cube is %d",i*i*i );
}