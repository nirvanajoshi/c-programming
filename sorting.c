#include<stdio.h>
int main()
{
    int i,j,n,a[10],temp=0;
    printf("Enter the number of matrix you want sorting");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the %d element of matrix:\n",i+1);
        scanf("%d",&a[i]);

    }
    for(i=0;i<(n-1);i++)
     {
        for(j=i+1;j<n;j++)
         {   
            if(a[i]>a[j])
              {
                temp = a[i];
                a[i]=a[j];
                a[j]=temp;
              }
         }
     }
     for ( i = 0; i < n; i++)
     {
        printf("%d\t",a[i]);
     }
     
}