/*uses of Euclid algrothim to find hcf and lcm using hcf*/
#include<stdio.h>
int hcff(int a,int b)
{

    while(b!=0)
    {
        int temp = b;
        b = a % b;
        a = temp ;
    }
    return a;
}
int main()
{
    int number1,number2,hcf,lcm,a,b;
    printf("Enter first number:");
    scanf("%d",&number1);
    printf("Enter second number:");
    scanf("%d",&number2);
    hcf =hcff(number1,number2) ;
    lcm = (number1*number2)/hcf;
    printf("%d is HCF of %d and %d \n",hcf,number1,number2);
    printf("%d is LCM of %d and %d",lcm,number1,number2);
    return 0;
}