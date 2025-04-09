#include <stdio.h>
int sum(int a, int b);
int main()
{
    int fn1,fn2;
    printf("Enter first number :");
    scanf("%d",&fn1);
    printf("Enter second number :");
    scanf("%d",&fn2);
    sum(fn1,fn2);
    return 0;

}
int sum(int a, int b)
{
    int sum;
    sum = a + b;
    printf("Sum is : %d",sum);
    return sum;
}