    #include<stdio.h>  
    #include<math.h>  
      
    double factorial(int);  
    void   cal(float, float*);  
      
    int main()  
    {  
        int   x;  
        float radian, result = 0;  
      
        printf("Enter value of x in degrees\n");  
        scanf("%d", &x);  
      
        radian = x * (3.14159 / 180.0); 
      
        cal(radian, &result);  
      
        printf("Sin(%d) = %f\n", x, result);  
      
        return 0;  
    }  
      
    void cal(float num, float *res)  
    {  
        int i, n = 1, sign = 1;  
      
        for(i = 1; (n <= 10); i += 2)  
        {  
           *res  +=  sign * ( pow(num, i) / factorial(i) );  
            n    +=  1;  
            sign *= -1;  
        }  
    }  
      
    double factorial(int num)  
    {  
        int    i;  
        double sum = 1;  
      
        for(i = 1; i <= num; i++)  
        {  
            sum *= i;  
        }  
        return(sum);  
    }  
