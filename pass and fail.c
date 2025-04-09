#include<stdio.h>
int main ()
{
   float percentage;
   printf("Enter your percentage");
    scanf("%f",percentage);
     if (percentage <= 100 && percentage >= 80)
     {
        printf("Distiction");
     }
    else if (percentage < 80 && percentage >= 65)
    {
        printf("first division");
    }
    else if (percentage <65 && percentage >= 55)
    {
        printf("second division");
   }
    else if (percentage < 55 && percentage >= 40)
   {
    printf("Pass");
   }
 else
 {
    printf("fail........");
 }


  return 0;
}