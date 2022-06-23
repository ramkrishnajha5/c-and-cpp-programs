//ERROR OCCURED
#include<stdio.h>
#include<math.h>

void area (float *,float *,float *);
int main()
{
    float a,b,c;
    printf("Enter Each Side Of Triangle\n");
    printf("First side: ");
    scanf("%f",&a);
    printf("Second side: ");
    scanf("%f",&b);
    printf("Third side: ");
    scanf("%f",&c);
    area(&a, &b, &c);
    return 0;
}
void area(float *s1,float *s2,float *s3)
{
    float s,area;
    s = (*s1 + *s2 + *s3) / 2.0;
    area = sqrt(s * (s - *s1) * (s - *s2) * (s - *s3));
    printf("\nArea of triangle is %.2f",area);
}