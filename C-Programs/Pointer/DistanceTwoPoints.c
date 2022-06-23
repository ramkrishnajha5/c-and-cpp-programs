#include<stdio.h>
#include<math.h>

float cal_distance(float *,float *,float *,float *);

int main()
{
    float x1,y1,x2,y2,result;
    
    printf("DISTANCE BETWEEN TWO POINTS\n");
    
    printf("Enter the value of x1: ");
    scanf("%f",&x1);
    
    printf("Enter the value of y1: ");
    scanf("%f",&y1);
    
    printf("Enter the value of x2: ");
    scanf("%f",&x2);
    
    printf("Enter the value of y2: ");
    scanf("%f",&y2);
    
    result = cal_distance(&x1, &y1, &x2,&y2);

    printf("Distance is calculating.....\n");
    printf("Distance is %.2f",result);

    return 0;
}
float cal_distance(float *x1,float *y1,float *x2,float *y2)
{
    return (sqrt((*x2 - *x1) * (*x2 - *x1) + (*y2 - *y1) * (*y2 - *y1)));
}