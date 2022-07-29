#include <stdio.h>
int main()
{
    char op;
    int no1,no2;
    float output;
    printf("Enter what you want to do (+, -, *, /) :");
    scanf("%c",&op);
    printf (" \n Enter first number :");  
        scanf(" %d", &no1);                                    // take first number  
        printf (" Enter second number :");  
        scanf (" %d", &no2);                                   // take second number 
    switch (op)
    {
    case '+': output=no1+no2;                                  // adding the two numbers.
              printf ("The Sum of %d and %d is: %.2f",no1,no2,output);  
              break;
    case '-': output=no1-no2;                                  // subtracting the two numbers.  
              printf ("The Subtraction of %d and %d is:%.2f",no1,no2,output);  
                break;
    case '*': output=no1*no2;                                  // multiplying the two numbers  
              printf ("The Product of %d and %d is:%.2f",no1,no2,output);  
                break;
    case '/':
         if (no2 == 0)                                         // if n2 == 0, division is undefined.
                {  
                    printf ("Invalid Argument");  
                    scanf ("%d", &no2);        
                    }  
                output=no1/no2;                                // dividing the two numbers  
                printf ("Division of %d and %d is: %.2f",no1,no2,output);  
                break;
    /*    if(no1==0.0)
        {
            printf("0");
            break;
        }
        else if(no2==0.0)
        {
           printf("Invalid Argument");
           break;
        }
        else 
        {
            output=no1/no2;
            printf("%lf/%lf=%lf",no1,no2,output);
            break;
        }
    } */
    default:
    printf("Invalid Operation");
    break;
    }
    return 0;
}