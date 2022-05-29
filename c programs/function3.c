#include<stdio.h>
int cube(int);
int main()
{
    int i;
    printf("Takes an integer value\n");
    scanf("%d",&i);
    int m = cube(i);
    printf("Cube is %d",m);
    return 0;

}
int cube(int i)
{
    int j =i*i*i;
    return (j);
}