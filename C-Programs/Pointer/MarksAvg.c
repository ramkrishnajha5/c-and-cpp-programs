#include<stdio.h>
float avg(float *, float *, float *);
int main()
{
    float py,ch,math;
    float av;
    printf("Enetr Physics Marks: ");
    scanf("%f",&py);
    printf("Enetr Chemistry Marks: ");
    scanf("%f",&ch);
    printf("Enetr Maths Marks: ");
    scanf("%f",&math);
    av = avg(&py, &ch, &math);
    printf("Avrage of marks is %.2f",av);
    return 0;
}
float avg(float *py, float *ch, float *math)
{
    float avrage;
    avrage = (*py+*ch+*math)/3;
    return (avrage);
}