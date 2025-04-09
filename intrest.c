#include<stdio.h>
int main()
{
    float principal,time,rate,intrest;
    printf("Enter principle:");
    scanf("%f",&principal);

    printf("Enter time:");
    scanf("%f",&time);

    printf("Enter rate:");
    scanf("%f",&rate);
     
     if(rate <= 10)
    {
    intrest= (principal*time*rate)/100;
    printf("The intrest of given amount is;%f",intrest);
    }
    else
    {
    intrest= (principal*time*(rate*2))/100;
    printf("The intrest of given amount is;%f",intrest);

    }
    
    return 0;
}