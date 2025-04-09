
/*Use of array in simple format*/
#include<stdio.h>
int main()
{
    int i , roll[5];
    float marks[5];
    for(i=0;i<5;i++)
    {
        printf("%d.Enter Roll NO:",(i+1));
        scanf("%d",&roll[i]);
        printf("%d.Enter Marks:",(i+1));
        scanf("%f",&marks[i]);
    }
    float l=marks[0],h=marks[0];
    printf("Roll No  \t  Marks");
    printf("\n");
    for(i=0;i<5;i++)
    {
        printf("%d \t\t %f \n",roll[i],marks[i]);
    }
    for(i=0;i<5;i++)
    {
        if (l > marks[i])
        {
            l = marks[i];
        }
    }
     for(i=0;i<5;i++)
    {
        if (h < marks[i])
        {
            h = marks[i];
        }
    }
    printf("The higest marks is %f",h);
    printf("The lowest marks is %f",l);
   return 0;

}