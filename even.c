#include<stdio.h>
int main()
{
    int number,sum=0,i;
    printf("Enter the number you want sum of even number upto:");
    scanf("%d",&number);
    for (i=1;i<=number;i++)/**i will go upto number since we want even number upto number */
    {
       if(number % i == 0)/*check if the number is even or not use of if condition*/
       {
        printf("%d \n",i);
       }
    }
    
    
    return 0;
}