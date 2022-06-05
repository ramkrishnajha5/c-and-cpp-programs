#include<stdio.h>
void prime(int);
void armstrong(int);
void perfect(int);

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    prime(n);
    armstrong(n);
    perfect(n);
    return 0;
}
void prime(int n)
{
    int i, flag = 0;
  
    if (n == 0 || n == 1)
    flag = 1;

  for (i = 2; i <= n / 2; ++i) 
  {

    
    if (n % i == 0) 
    {
      flag = 1;
      break;
    }
  }


  if (flag == 0)
    printf("\n%d is a prime number.\n", n);
  else
    printf("\n%d is not a prime number.\n", n);

}
void armstrong(int n)
{
    int r, sum=0, temp;    
    
    temp = n;    
    while(n > 0)    
    {    
        r = n%10;    
        sum = sum+(r*r*r);    
        n = n/10;    
    }
    if(temp == sum)    
    printf("\n%d is armstrong number\n",temp);    
    else    
    printf("\n%d is not armstrong number\n",temp);
}
void perfect(int n)
{
    int rem, sum = 0, i;     
  
    for(i = 1; i < n; i++)
    {

        rem = n % i;  
        if (rem == 0)  
        {  
            sum = sum + i;  
        }  
    }  
    if (sum == n)  
        printf("\n%d is a Perfect Number",n);  
    else  
        printf("\n%d is not a Perfect Number",n);
}