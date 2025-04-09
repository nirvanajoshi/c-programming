#include<stdio.h>
int prime(int a)
{
    int i,n=1;/*return type*/
    for(i=2;i<=a;i++)
    {
        if(a%i==0)
        {
            n=0;
        }
    }
    if(n==1)
    {
        printf("prime number");
    }
    else
    { 
        printf("not prime number")
    }
}


int main()
{
    int num;
    printf("Enter the Number yoyu want check wheither prime or not:");
    scanf("%d",&num);
    prime(num);
    return 0;
}
