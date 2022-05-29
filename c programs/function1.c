#include<stdio.h>

int cube();
int main()
{
    int m = cube();
    printf("Cube is %d",m);
    return 0;
}
int cube()
{
    int i,j;
    printf("takes an integer\n");
    scanf("%d",&i);
    j = i*i*i;
    return (j);
}