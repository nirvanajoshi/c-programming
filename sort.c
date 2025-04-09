#include<stdio.h>
 void sort(int a[],int num){
    for(int i=0;i<num-1;i++)
    {
        int temp = 0;
        for(int j=0;j<num-i-1;j++)
        {  if (a[j]>a[j+1])
           { temp = a[j];
            a[j] = a[j+1];
            a[j+1] = temp;

        }
        }
    }
   
    printf("The sorted array is:\n");
    for(int i=0;i<num;i++)
    {
      printf("%d",a[i]);
      printf("\t");
    }

 }
 int main()
 {
    int a[100],num;
    printf("Enter the no. Element in arry:\n ");
    scanf("%d",&num);
    printf("Enter the Elements in arry:\n");
    for(int i=0;i<num;i++)
    {
        printf("Enter the element of a[%d]:",(i+1));
        scanf("%d",&a[i]);
        printf("\n");
    }
    sort(a,num);
    return 0;
 }