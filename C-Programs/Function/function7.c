#include<stdio.h>
#include<math.h>
 int dia(int);
 float car(int);
 float area(int);

 int main()
 {
     int r,d;
     float c,a;
     printf("Enter The Radius: ");
     scanf("%d",&r);
     d = dia(r);
     printf("\nThe Diameter is: %d\n",d);
     c = car(r);
     printf("The Carcumfrences is %.2f\n",c);
     a = area(r);
     printf("The Area is %.2f\n",a);
     return 0;
 }
 int dia(int i)
 {
     return(2*i);
 }
 float car(int i)
 {
     return(M_PI*2*i);
 }
 float area(int i)
 {
     return(M_PI*i*i);
 }