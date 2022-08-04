#include<stdio.h>
#include<stdlib.h>
float avgmarks(float,float,float *);
int main()
{
    float sub,pr,sum,avg,*ptr = NULL;
    int s;    
    printf("Number of subject: ");
    scanf("%f",&sub);

    ptr = (float *)(malloc(sub*sizeof(float)));

    if(ptr == NULL)
    {
        printf("Oops! Error occured memory not allocated");
        exit(0);
    }
    else
    printf("\nEnter the marks: ");
    for(s=0;s<sub;s++)
        scanf("%f",ptr + s);

    printf("\nEnter the no. of practical subject: ");
    scanf("%f",&pr);

    ptr = realloc(ptr, (sub+pr)*sizeof(float));

    if(ptr == NULL)
    {
        printf("Oops! Error occured memory not allocated");
        exit(0);
    }
    else
    printf("\nEnter the marks of practical subject: ");
    for(s=sub;s<(sub+pr);s++)
    {
        scanf("%f",ptr + s);
    }
    sum = avgmarks(sub,pr,ptr);
    
    printf("\nTotal Marks is: %.2f",sum);
    avg = sum/sub;
    printf("\nAverage marks is %.2f",avg);
    free(ptr);
    return 0;

}
float avgmarks(float n1,float n2,float *ptr)
{
    float n,sum = 0;
    int i;
    
    n = (n1+n2);

    for(i=0;i<n;i++)
    {
        sum += (*ptr + i);
    }
    return (sum);
}