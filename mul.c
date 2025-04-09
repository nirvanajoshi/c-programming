/* USe of array to print matrix
*/
#include<stdio.h>
int main()
{
    int p,q,r,s,i,j,k;
    int a[10][10],b[10][10],mul[10][10];
    printf("For first martix \n");
    printf("Enter the value of row:");
    scanf("%d",&p);
    printf("Enter the value of columnn:");
    scanf("%d",&q);
    
    for(i=0;i<p;i++)/*use fo for loop to make user input data of first matrix*/
    {
        for(j=0;j<q;j++)
        {
            printf("Enter %d row and %d column: \n",(i+1),(j+1));
            scanf("%d",&a[i][j]);
        }
    }
    printf("For second martix:\n");
     printf("Enter the value of row:");
    scanf("%d",&r);
    printf("Enter the value of columnL:");
    scanf("%d",&s);
     for(i=0;i<r;i++)/*use of second matrix to take input from user*/
    {
        for(j=0;j<s;j++)
        {
            printf("Enter %d row and %d column :\n",(i+1),(j+1));
            scanf("%d",&b[i][j]);
        }
    }

   for(i=0;i<p;i++)/*use of loop to multiply two matrixes*/
    {
        
        for(j=0;j<s;j++)
        {
            for(k=0;k<q;k++)
            {
                mul[i][j]+=a[i][k]*b[k][j];
            }
        }
        
    }
    printf("The mul of two matrix is:\n");
     for(i=0;i<p;i++)/*use of loop print mul of matrix*/
    {
        
        for(j=0;j<s;j++)
        {
           printf("%d \t",mul[i][j]);
          
        }
        printf("\n");
    }
}