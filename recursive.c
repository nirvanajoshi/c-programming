/* Factroial of number using recursive function */
/*#include <stdio.h>
int factorial(int n) {
    if (n == 0 || n == 1)
    {  
        return 1;
    } else
    {  
        return n * factorial(n - 1);
    }
}

int main() {
    int num = 5;
    printf("Factorial of %d is %d\n", num, factorial(num));  // Output: 120
    return 0;
}*//*
// to do sum upto ceretain number
#include<stdio.h>
int sum(int num){
    if (num== 0){
        return 0;
    }
    else{
        return num+sum(num-1);
    }
}
int main()
{
    int n,s;
    printf("Enter the number you wan sum up to:");
    scanf("%d",&n);
    printf("The sum of number upto %d is:%d",n,sum(n));
    return 0;

}*//*
//to do sum of odd number up to certain number
#include <stdio.h>
int sum(int n) 
{
   if (n <= 0)
    {
        return 0; 
    } 
    else if (n % 2== 0)
    {
        return n + sum (n - 2); 
    }
    else 
    {
        n=n-1;
        return n+sum(n-2);
    }
}

int main() 
{
    int num;
    printf("Enter a number:");
    scanf("%d", &num);
    printf("Sum of natural number until %d is %d", num, sum(num));
    return 0;
}*//*
// to calculaate sum of digits in number
#include <stdio.h>
int sum(int num){
    if(num==0){
        return 0;
    }
    else{
        return (num%10)+sum(num/10);
    }
}
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("The sum of total digit in above number is:%d",sum(n));
}
*//*
// USe to print febonacii series
#include<stdio.h>
int ser(int n)
{
    if(n==0)
    {
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else 
    {
    return ser(n-1)+ser(n-2);
    }

}
int main(){
    int num,i;
    printf("Enter the the nummer of number in series:");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        printf("%d\t",ser(i));
    }
}*/
/*#include<stdio.h>
int result(int a[],int i,int n)
  {
    if(i<n)
    {
        printf("%d\t",a[i]);
        result(a,i+1,n);
    }
    }
int main()
{
    int n,i=0;
    printf("Enter the no. of element of array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the  of elements of array:\n");
    for(i=0;i<n;i++){
        printf("Enter the element of a[%d]:",i+1);
        scanf("%d",&a[i]);
        
    }
    result(a,0,n);
    
     
}

*/
// use of resursive to reverse string function
#include<stdio.h>
char result(char a[],int n)
  {
    if(n>=0)
    {
        printf("%c\t",a[n]);
        result(a,n-1);
    }
    }
int main()
{
    char a[100];
    printf("Enter the element of strin:");
    scanf("%s",a);
    int n=1;
    for(int i=0;a[i]!='\0';i++)
    {
        n++;
    }
    result(a,n);
}


