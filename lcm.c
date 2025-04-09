/* lcf of two number */
#include<stdio.h>
int main()
{
    int number1,number2,hcf,lcm,a=0,b=0;
    printf("Enter first number:");
    scanf("%d",&number1);
    printf("Enter second number:");
    scanf("%d",&number2);
    a = number1;
    b = number2;
    while (number1!=number2)
    {
        if(number1>number2)
         {
            number1-=number2;
         }
        else
        {
            number2-=number1;
        }
    }
    
    hcf = number1;
    lcm = (a*b)/hcf;
    printf("%d",lcm);
    return 0;

}
