//a program in C to find the largest and smallest element using pointer
#include<stdio.h>
void largesmall(int arr[],int len,int *lar,int *sml);
int main()
{
    int len;
    printf("Enter the length of array: ");
    scanf("%d",&len);
    int a[len],i,lar,sml;
    for(i=0;i<len;i++)
    scanf("%d",a + i);
    largesmall(a,len,&lar,&sml);
    printf("\nLarger number is %d",lar);
    printf("\nSmaller number is %d",sml);
    return 0;
}
void largesmall(int arr[],int len,int *lar,int *sml)
{
    int i;
    *lar = arr[0];
    *sml = arr[0];
    for(i=1;i<len;i++)
    {
        if(arr[i]>*lar)
        *lar = arr[i];
        if(arr[i]<*sml)
        *sml = arr[i];
    }
}