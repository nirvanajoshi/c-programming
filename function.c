#include<stdio.h>
int sum(int a,int b);
int minus(int a,int b);
int mult(int a,int b);
int divide(int a,int b);
int main()
{
    int number1,number2;
    printf("Enter first number:");
    scanf("%d",&number1);
    printf("Enter second number:");
    scanf("%d",&number2);
    printf("sum : %d\n",sum(number1,number2));
    printf("Difference :%d\n",minus(number1,number2));
    printf("product:%d\n",mult(number1,number2));
    printf("divison:%d\n",div(number1,number2));
    return 0;

}

int sum(int a,int b)
{
    int add;
    add = a+b;
    return add;
}
int minus(int a,int b)
{
    int sub;
    sub = a-b;
    return sub;
}
int mult(int a,int b)
{
    int mul;
    mul = a*b;
    return mul;
}
int divide(int a,int b)
{
    int div;
    div = a/b;
    return div;
}