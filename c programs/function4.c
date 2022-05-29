#include<stdio.h>
#include<math.h>

void diameter();
void circumfrences();
void area();

int main()
{
    printf("function calling\n");
    diameter();
    circumfrences();
    area();
    return 0;
}
void diameter()
{
    int i;
    printf("Enter the radius\n");
    scanf("%d",&i);
    printf("The diameter is %d\n",2*i);
}
void circumfrences()
{
    int i; 
    float j;
    printf("Enter the radius ");
    scanf("%d",&i);
    j = 2*M_PI*i;
    printf("Circumfrences is %.2f\n",j);
}
void area()
{
    int i;
    float j;
    printf("Enter the radius ");
    scanf("%d",&i);
    j = M_PI*i*i;
    printf("Area is %.2f",j);
    
}