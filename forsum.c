#include<stdio.h>
int main()
{
    int number,sum=0,i;
    printf("Enter the number you want sum of natural number upto:");
    scanf("%d",&number);
    for (i=1;i<=number;i++)
    {
    sum = sum+i;
    }
    printf("Sum of natural number is : %d",sum);
    
    return 0;
}