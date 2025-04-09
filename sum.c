#include<stdio.h>
int main()
{
    int number,sum ;
    printf("Enter the number you want sum of natural number upto:");
    scanf("%d",&number);
    sum = (number*(number+1))/2;
    printf("Sum of natural number is : %d",sum);
    return 0;
}