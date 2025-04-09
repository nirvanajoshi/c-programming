
/*#include <stdio.h>
void read(int matrix[10][10],int row,int col) {
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("Enter the element of[%d][%d]:", i + 1,j + 1); 
            scanf("%d",&matrix[i][j]);
        }
    }
}
void multiply(int matrix1[10][10],int matrix2[10][10],int mul[10][10],int p,int q,int r,int s){
    for(int i=0;i<p;i++){
        for(int j=0;j<s;j++){
            mul[i][j]=0;
            for(int k=0;k<q;k++){
                mul[i][j]+=matrix1[i][k]*matrix2[k][j];
            }
        }
    }
}
void result(int result[10][10],int row,int col) {
    int i=0;
    int j=0;
    for( i=0;i<row;i++){
        for( j=0;j<col;j++){
        printf("%d \t",result[i][j]);
        }
        printf("\n");
    }
}



int main() {
    int num1[10][10];
    int p,q;
    printf("Enter the row of first matrix:");
    scanf("%d",&p);
    printf("Enter the col of first matrix:");
    scanf("%d",&q);
    printf("Enter the Element of fist matrix:\n");
    read(num1,p,q);
    int num2[10][10];
    int r,s;
    printf("Enter the row of first matrix:");
    scanf("%d",&r);
    printf("Enter the col of first matrix:");
    scanf("%d",&s);
    printf("Enter the Element of fist matrix:\n");
    read(num2,r,s);
    int mul[10][10];
    multiply(num1,num2,mul,p,q,r,s);
    result(mul,p,s);

    return 0;
}*/

#include <stdio.h>
#define n 10
void read(int matrix[n][n],int r,int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("Enter value of[%d][%d]:",i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
    }
}
void mul(int matrix1[n][n],int matrix2[n][n],int matrix3[n][n],int p,int q,int r,int s){
      for(int i=0;i<p;i++){
        for(int j=0;j<s;j++){
            matrix3[i][j]=0;
           for(int k=0;k<q;k++){
               
               matrix3[i][j]+=matrix1[i][k]*matrix2[k][j];
            }
        }
    }
    
}
void dis(int matrix[n][n],int r,int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int p,q,r,s;
    printf("Enter the row of first matrix:");
    scanf("%d",&p);
    printf("Enter the column of first matrix:");
    scanf("%d",&q);
    printf("Enter the row of second matrix:");
    scanf("%d",&r);
    printf("Enter the column of second matrix:");
    scanf("%d",&s);
    int matrix1[n][n],matrix2[n][n],matrix3[n][n];
    printf("Enter the value of first matrix:\n");
    read(matrix1,p,q);
    printf("Enter the value of second matrix:\n");
    read(matrix2,r,s);
    if(q==r){
        mul(matrix1,matrix2,matrix3,p,q,r,s);
        
    }
    else{
        printf("multiply not possible");
        return 0;
    }
    printf("Multiplication result:\n");
    dis(matrix3,p,s);
    return 0;
}