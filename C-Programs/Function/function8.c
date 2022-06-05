/* program to find number is prime amstrong and perfect or not*/
#include<stdio.h>
void prime();
void amstrong();
void perfect();

int main()
{
    prime();
    amstrong();    
    perfect();    
    return 0;
}
void prime()
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


  if (flag == 0)
    printf("\n%d is a prime number.\n", n);
  else
    printf("\n%d is not a prime number.\n", n);
}
void amstrong ()
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
    printf("\narmstrong  number\n");    
    else    
    printf("\nnot armstrong number\n"); 
}  
void perfect()
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
        printf("\n %d is a Perfect Number",num);  
    else  
        printf("\n %d is not a Perfect Number",num);  
}