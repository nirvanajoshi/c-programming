#include<stdio.h>
int main()
{
    int number,sum,i,prime=1;
    printf("Enter a number :");
    scanf("%d",&number);
    for(i=2;i<=(number/2);i++)
    {
        while(number%i==0)
        {
            prime=0;
            break;
        }
    }
    (prime == 1 )?printf("%d is prime  number",number):printf("%d is not prime  number",number);
}
