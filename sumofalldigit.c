#include<stdio.h>
int main()
{
    int number,sum=0,rem;
    printf("Enter the number whose digit sum you want ");
    scanf("%d",&number);
    while(number > 0)
     {
        rem = number % 10;
        number = number / 10;
        sum = sum +rem;
     }
     printf("Sum of number is:%d",sum);
     
}