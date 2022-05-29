#include<stdio.h>
#include<math.h>

int dia();
float cir();
float area();

int main()
{
   int d;
   float c,a;
   d = dia();
   printf("diameter is %d\n",d);
   c = cir();
   printf("circumfrences is %.2f\n",c);
   a = area();
   printf("area is %.2f",a);
   return 0; 
}
int dia()
{
    int r;
    printf("enter the radius ");
    scanf("%d",&r);
    return (2*r);
}
float cir()
{
    float r;
    float m;
    printf("enter the radius ");
    scanf("%f",&r);
    m = 2*M_PI*r;
    return (m);
    
}
float area()
{
    float r;
    float m;
    printf("enter the radius ");
    scanf("%f",&r);
    m = M_PI*r*r;
    return (m); 
}