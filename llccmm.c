/* new method of finding l.c.m*/
#include<stdio.h>
int lcm(int a, int b){
    int i,lcm,hcf;
    for(i=1;i<=a||i<=b;i++)
    {
        if(a%i==0 && b%i==0)
        hcf = i;
    }
    lcm= (a*b)/hcf;
    printf("The lcm of given two number is:%d",lcm);
    
     
     
}
int main()
{
    int number1,number2;
    printf("Enter first number:");
    scanf("%d",&number1);
    printf("Enter second number:");
    scanf("%d",&number2);
    lcm(number1,number2);

}
