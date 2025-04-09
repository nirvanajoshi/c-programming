#include <stdio.h>

int main() 
{
    int i,j;
    for(i=5;i>=1;i--)
    {

        for(j=i;j>=1;j--)
        {
            printf("*");
            
        }
        
        printf("\n");
         for(k=1;k>=5-1;k++)
            {
                printf("\t");
            }

    }
    return 0;
}
