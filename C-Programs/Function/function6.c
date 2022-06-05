#include<stdio.h>
#include<math.h>

void dia(int);
void car(int);
void area(int);

int main()
{
    int r;
    printf("Enter the radius: ");
    scanf("%d",&r);
    dia(r);
    car(r);
    area(r);
    return 0;
}
void dia(int i)
{
    printf("the diameter is %d\n",2*i);
}
void car(int i)
{
    float c;
    c = 2*M_PI*i;
    printf("the circumfrences is %.2f\n",c);
}
void area(int i)
{
    float a;
    a = M_PI*i*i;
    printf("the area is %.2f",a);
}