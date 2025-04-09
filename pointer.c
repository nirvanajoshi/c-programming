/*#include<stdio.h>
int main(){

int myAge = 43; 
printf("%d",myAge);    
int *ptr = &myAge; 
*ptr = 500;

printf("%d\n", myAge);
printf("%p\n", &myAge);
printf("%p\n", *ptr);
}*/
/*#include<stdio.h>
void swap(int*poi1,int*poi2){
    
        int temp;
        temp = *poi1;
        *poi1 =*poi2;
        *poi2 = temp;

    
  
}
int main(){

int a = 5;
int b = 6;
swap(&a,&b);

    printf("a = %d",a);
    printf("b = %d",b);

}*//*
#include <stdio.h>

void sort(int *a) {
    int temp;
    for (int i = 0; i < 4; i++) {  
        for (int j = 0; j < 4 - i; j++) { 
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main() {
    int a[5] = {3, 5, 1, 9, 7};  
    sort(a);  
    for (int i = 0; i < 5; i++) {
        printf("%d ", a[i]);  
    
}
     return 0; 
}
*/
/*
#include<stdio.h>// using int *ptr = a (it give the value of a[0])
void sort(int *a){
    int temp;
    for(int i =0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(*(a+i)>*(a+j)){
                temp =*(a+i);
                *(a+i)=*(a+j);
                *(a+j)=temp;
            }
        }
    }
    
}
int main(){
    int n = 5;
    int a[5]={7,3,4,2,1};
    sort(a);
    for(int i=0;i<5;i++){
        printf("%d\t",a[i]);
    }
}*//*
#include <stdio.h>
void read(int (*matrix)[2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", (*(matrix + i) + j)); 
        }
    }
}

void print(int (*matrix)[2]) {
    printf("Matrix elements:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", *(*(matrix + i) + j)); 
        }
        printf("\n");
    }
}

int main() {
    int matrix[2][2];

    printf("Enter the elements of the matrix:\n");
    read(matrix); 

    print(matrix); 

    return 0;
}*/
/*
#include <stdio.h>
void read(int (*matrix)[3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", (*(matrix + i) + j)); 
        }
    }
}
void mul(int (*matrix1)[3],int (*matrix2)[3],int (*matrix3)[3]) {
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
                 matrix3[i][j] = 0;

            for (int k = 0; k < 3; k++){
               *(*(matrix3 + i) + j) += *(*(matrix1 + i) + k) * *(*(matrix2 + k) + j);

                
            }
         
        }
    }
}

void print(int (*matrix)[3]) {
    printf("Matrix elements:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", *(*(matrix + i) + j)); 
        }
        printf("\n");
    }
}

int main() {
    int matrix1[3][3];
    int matrix2[3][3];
    int matrix3[3][3];

    printf("Enter the elements of the matrix1:\n");
    read(matrix1); 
    printf("Enter the elements of the matrix2:\n");
    read(matrix2); 
    mul(matrix1,matrix2,matrix3);
    print(matrix3);
    
     

    return 0;
}*/
#include <stdio.h>

struct student {
    char name[100];
    int roll;
    float marks;
};

int main() {
    struct student s;  // Declare a student structure variable
    struct student *ptr = &s;  // Pointer to the structure

    printf("Enter the name of student: ");
    scanf("%s", ptr->name);  // Using -> to access struct members via pointer

    printf("Enter the roll number: ");
    scanf("%d", &ptr->roll);  // Pointer to integer

    printf("Enter the marks of student: ");
    scanf("%f", &ptr->marks);  // Pointer to float

    printf("The marks of %s whose roll number is %d is %.2f\n", ptr->name, ptr->roll, ptr->marks);

    return 0;
}
#include <stdio.h>

struct car {
    char name[50];
    char model[50];
    int hp;
    float prize;
};

int main() {
    struct car c[5];
    struct car *ptr = c; // Pointer to the array of struct car

    for (int i = 0; i < 5; i++) {
        printf("Enter the name of car: ");
        scanf("%s", (ptr + i)->name);
        printf("Enter the model: ");
        scanf("%s", (ptr + i)->model);
        printf("Enter horsepower: ");
        scanf("%d", &(ptr + i)->hp);
        printf("Enter prize: ");
        scanf("%f", &(ptr + i)->prize);
    }

    for (int i = 0; i < 5; i++) {
        printf("\nCar Brand: %s", (ptr + i)->name);
        printf("\nModel: %s", (ptr + i)->model);
        printf("\nHorsepower: %d", (ptr + i)->hp);
        printf("\nPrize: %.2f\n", (ptr + i)->prize);
    }
    
    return 0;
}











































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































