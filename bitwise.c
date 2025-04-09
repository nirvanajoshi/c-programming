#include<stdio.h>

int main()
{
    int number;
    printf("Enter a number to check even or odd:\n");
    scanf("%d",&number);
 
    if(number & 1)
        printf("Odd");
    else
        printf("Even");
  
    return 0;
}