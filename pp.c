#include<stdio.h>
int prime(int a)
{
    int i,n=0;
    for(i=2;i<=a;i++)
    {
        if (a%i==0)
        { 
            n=n+1;
        }
    }
    return n;
}
int main()
{
    int num;
    printf("Enter a Number");
    scanf("%d",&num);
    if (prime(num)==1)
    {
        printf(" Prime Number");
    }
    else{
        printf("Not Prime Number");
    }
}