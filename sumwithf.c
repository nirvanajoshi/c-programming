#include <stdio.h>
int sum(int a, int b);
int main()
{
    int fn1,fn2;
    printf("Enter first number");
    scanff("%d",&fn1);
    printf("Enter second number");
    scanf("%d",&fn2);
    sum(fn1,fn2);
    return 0;

}
int sum(int a, int b)
{
    int a,b,sum;
    sum = a + b;
    return sum;
}