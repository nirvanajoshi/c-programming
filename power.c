#include<stdio.h>
int main()
{
    int number,result=1,i,power;
    printf("Enter the base number :");
    scanf("%d",&number);
    printf("Enter the power number:");
    for (i=1;i<=power;i++)/*since we want power of number and we can multiply same number power time 
                           for example if we have power 3 we will do number*number*number */
    {
      result=result*number; 
    
    }
    printf("result is : %d",result);
    
    return 0;
}