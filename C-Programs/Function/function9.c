#include<stdio.h>
int prime();
int amstrong();
int perfect();

int main()
{
    int pr,am,pe;
    pr = prime();
     if (pr == 0)
      printf("\nPRIME NUMBER\n" );
     else
      printf("\nNOT PRIME NUMBER\n");
    am = amstrong();
    if(am == 0)
      printf("\nAMSTRONG NUMBER\n");
    else
      printf("\nNOT AMSTRONG NUMBER\n");
    pe = perfect();
    if (pe == 0)
      printf("\nPERFECT NUMBER\n");
    else
      printf("\nNOT PERFECT NUMBER\n");
    return 0;
}
int prime()
{
    int n, i, flag = 0;
  printf("Enter a positive integer to find number is prime or not: ");
  scanf("%d", &n);

  
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
  return (flag);
}
int amstrong()
{
    int n, r, sum=0, temp;    
    printf("enter the number to find the number is armstrong or not: ");    
    scanf("%d",&n);    
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
int perfect()
{
    int num, rem, sum = 0, i;  

    printf("Enter a number to check number is perfect o not: ");  
    scanf("%d", &num);      
  
    for(i = 1; i < num; i++)
    {

        rem = num % i;  
        if (rem == 0)  
        {  
            sum = sum + i;  
        }  
    }  
    if (sum == num)  
        return 0;
    else  
        return 1;  
}