#include<stdio.h>

int main()
{
    int cp,sp;

    printf("enter cost and selling price");
    scanf("%d%d",&cp,&sp);
    if(cp>sp)
    printf("Loss");
    else if(cp==sp)
    printf("NPNL");
    else
    printf("Profit");
    return 0;
}