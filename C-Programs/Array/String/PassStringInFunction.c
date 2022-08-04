#include<stdio.h>
void student(char *n,char *a)
{
    printf("\nStudent name is: %s",n);

    printf("\nStudent address is: %s",a);

}
int main()
{
    char name[20]="Ram krishna",address[40]="Samastipur Bihar";
    student(name,address);
    return 0;

}
