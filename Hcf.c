/* hcf of two number */
#include<stdio.h>
int main()
{
    int number1,number2;
    printf("Enter first number:");
    scanf("%d",&number1);
    printf("Enter second number:");
    scanf("%d",&number2);
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
    
    printf("The hcf of two number is :%d",number1);

}
