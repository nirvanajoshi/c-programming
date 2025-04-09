#include<stdio.h>
void read(int matrix[10][10],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("Enter the Element of[%d][%d]", i+1,j+1);
            scanf("%d", &matrix[i][j]);
        }
    }
}
void summm(int matrix1[10][10],int matrix2[10][10],int sum[10][10],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            sum[i][j]=0;
            sum[i][j]=matrix1[i][j]+matrix2[i][j];
        }
    }
}
void display(int matrix[10][10],int row,int col){
     for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d \t", matrix[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int row,col;
    printf("Enter the number of row:");
    scanf("%d",&row);
    printf("Enter the number of column:");
    scanf("%d",&col);
    int matrix1[10][10];
    printf("Enter the number of first matrix:\n");
    read(matrix1,row,col);
    int matrix2[10][10];
    printf("Enter the number of second matrix:\n");
    read(matrix2,row,col);
    int sum[10][10];
    summm(matrix1,matrix2,sum,row,col);
    display(sum,row,col);
}
