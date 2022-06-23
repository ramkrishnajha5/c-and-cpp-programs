#include<stdio.h>
#include<math.h>
void result(float, float, float, float, float, float, float, float, float *, int *);
float distance(float, float, float, float);
float area(float, float, float);
int position(float, float, float, float);

int main()
{
    float m1, n1, m2, n2, m3, n3, m, n;
    float area1 = 0;
    int flag = 0;
    printf("Enter the value of (m1,n1): ");
    scanf("%f%f",&m1, &n1);

    printf("\nEnter the value of (m2,n2): ");
    scanf("%f%f",&m2, &n2); 

    printf("\nEnter the value of (m3,n3): ");
    scanf("%f%f",&m3, &n3);

    printf("\nEnter the value of (m,n): ");
    scanf("%f%f",&m, &n);

    result(m1, n1, m2, n2, m3, n3, m, n, &area1, &flag);
    printf("\nArea of triangle is: %.2f ",area1);

    if (flag == 1)
        printf("\nPoint(%.2f, %.2f) lies inside the triangle." ,m,n);
    else
        printf("\nprintf(%.2f, %.2f) lies outside the triangle. ",m,n);

}
void result(float m1, float n1, float m2, float n2, float m3, float n3, float m, float n, float *area1, int *flag)
{
    float a,b,c,d,e,f,x,y,z;

    a = distance(m1,n1,m2,n2);
    b = distance(m2,n2,m3,n3);
    c = distance(m3,n3,m1,n1);

    *area1 = area(a,b,c);

    d = distance(m1,n1,m,n);
    e = distance(m2,n2,m,n);
    f = distance(m3,n3,m,n);

    x = area(a,d,e);
    y = area(b,e,f);
    z = area(c,d,f);
    *flag = position(*area1, x, y, z);
}
float distance(float m1, float n1, float m2, float n2)
{
    return (sqrt((m2 - m1) * (m2 - m1) + (n2 - n1) * (n2 - n1)));
}
float area(float a, float b, float c)
{
    float s,area;
    s = (a+b+c) / 2;
    area = (sqrt(s*(s-a)*(s-b)*(s-c)));
    return (area);
}
int position(float area1, float x, float y, float z)
{
    float res;
    res = area1-(x+y+z);
    if(res == 0 || res<0.0001)
    {
        return (1);
    }
    else
    {
        return (0);
    }
}
