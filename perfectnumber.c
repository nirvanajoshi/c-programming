#include<stdio.h>
int main()
{
    int number,sum,i;
    printf("Enter a number :");
    scanf("%d",&number);
    for (i=1;i<=number;i++)
    {
        while (number/i==0)
        {
            sum=sum+i;
        }
    }
   (number==sum)?printf("%d is perfect number",number):printf("%d is not perfect number",number);
}