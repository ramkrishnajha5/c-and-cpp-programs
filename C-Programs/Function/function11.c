#include<stdio.h>
int prime(int);
int armstrong(int);
int perfect(int);

int main()
{
    int n,pr,ar,pe;
    printf("Enter a number: ");
    scanf("%d",&n);
    pr = prime(n);
    if (pr == 0)
    printf("\n%d is prime number\n",n);
    else
    printf("\n%d is not prime number\n",n);
    ar = armstrong(n);
    if (ar == 0)
    printf("\n%d is armstrong number\n",n);
    else
    printf("\n%d is not armstrong number\n",n);
    pe = perfect(n);
    if(pe == 0)
    printf("\n%d is perfect number\n",n);
    else
    printf("\n%d is not a perfect number\n",n);
    return 0;
}
int prime(int n)
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
    return 0;
  else
    return 1;

}
int armstrong(int n)
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
    return 0;    
    else    
    return 1;
}
int perfect(int n)
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
        return 0;  
    else  
        return 1;
}