/* USe of array to print matrix
*/
#include<stdio.h>
int main()
{
    int r,c,i,j;
    int a[10][10],b[10][10],sum[10][10];

    printf("Enter the value of row:");
    scanf("%d",&r);
    printf("Enter the value of columnL:");
    scanf("%d",&c);
    printf("For first martix \n");
    for(i=0;i<r;i++)/*use fo for loop to make user input data of first matrix*/
    {
        for(j=0;j<c;j++)
        {
            printf("Enter %d row and %d column: \n",(i+1),(j+1));
            scanf("%d",&a[i][j]);
        }
    }
    printf("For second martix:\n");
     for(i=0;i<r;i++)/*use of second matrix to take input from user*/
    {
        for(j=0;j<c;j++)
        {
            printf("Enter %d row and %d column :\n",(i+1),(j+1));
            scanf("%d",&b[i][j]);
        }
    }

   for(i=0;i<r;i++)/*use of matrix to summ two matrixes*/
    {
        
        for(j=0;j<c;j++)
        {
          sum[i][j]=a[i][j]+b[i][j];
        }
        
    }
    printf("The sum of two matrix is:\n");
     for(i=0;i<r;i++)/*use of loop print sum of matrix*/
    {
        
        for(j=0;j<c;j++)
        {
           printf("%d \t",sum[i][j]);
          
        }
        printf("\n");
    }
}