/* reverse of number*/
#include<stdio.h>
int main()
{
    int number,rem,reverse=0;
    printf("Enter a number :");
    scanf("%d",&number);
    while(number>0)
    {
        rem=number%10;
        reverse= reverse*10 + rem;
        number=number/10;
    }
    printf("the reverse of above number is :%d",reverse);
}