#include<stdio.h>
int main()
{
    int number,i,result=1;
    printf("Enter the number you want  factorial  upto:");
    scanf("%d",&number);
    for (i=1;i<=number;i++)/* we will go from number 1 to factrial number to */
    { 
     result=result*i; 
    }
    printf("factrial is :%d",result);
    return 0;
}