
/*program to return 3rsdd number if first two number are equal and give sum if not*/
#include<stdio.h>
int main()
{ 
    int number1,number2,number3,sum;
    printf("Enter first number");
    scanf("%d",&number1);
    printf("Enter second number");
    scanf("%d",&number2);
    printf("Enter third number");
    scanf("%d",&number3);
    if(number1==number3)
    {
        printf("3rd number is returned =%d",number3);
    }
    else
    {
        sum = number1+number2+number3;
        printf("sum of three number = %d",sum);
    }
}