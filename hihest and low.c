/* Araay to check higest marks*/

/*Use of array in simple format*/
#include<stdio.h>
int main()
{
    int i,h,l, roll[5];
    float marks[5];     
    for(i=0;i<5;i++)
    {
        printf("%d.Enter Roll NO:",(i+1));
        scanf("%d",&roll[i]);
        printf("%d.Enter Marks:",(i+1));
        scanf("%f",&marks[i]);
    }
    h = marks[0];
    l = marks[0];

    printf("Roll No  \t  Marks");
    printf("\n");
    for(i=0;i<5;i++)
    {
         {
        printf("%d \t\t %f \n",roll[i],marks[i]);
        }
        
        if (h < marks[i])
        {
            h = marks[i];
        }
     
         if (l > marks[i])
        {
            l = marks[i];
        }
        
    }
       printf(" The higest marks is : %.2f \n",h);
       printf(" The lowest marks is : %.2f \n",l);
 }


