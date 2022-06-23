//in function returning ramdom value through the pointer 
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int *getrandom();

int main()
{
    int *p;
    int i;
    p = getrandom();
    for(i=0;i<10;i++)
    {
        printf("Element [%d]: %ld\n",i,*(p + i));
    }
    return 0;
}
int *getrandom()
{
    static int r[10];
    int i;
    srand((unsigned)time(NULL));
    for(i=0;i<10;i++)
    {
        r[i] = rand();
        printf("%ld\n",r[i]);
    }
    return r;
}
