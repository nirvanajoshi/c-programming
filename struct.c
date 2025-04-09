
/*
#include<stdio.h>
struct student{
	char name[100];
	int roll;
	float marks;
	
}
s;
int main(){
    
    printf("Enter the name of student:");
    scanf("%s",s.name);
    printf("Enter the roll num:");
    scanf("%d",&s.roll);
    printf("Enter the marks of student:");
    scanf("%f",&s.marks);
    printf("The marks of %s whose roll is %d is %.2f:",s.name,s.roll,s.marks);
    
}*/

/*

#include<stdio.h>
struct book{
	char name[100];
	char athur[100];
	int year;
	float prize;
	char isbn[100];
}
b;
int main(){
    
    printf("Enter the name of book:");
    scanf("%s",b.name);
    printf("Enter the name of athur :");
    scanf("%s",b.athur);
    printf("Enter year of book:");
    scanf("%d",&b.year);
    printf("Enter prize of book:");
    scanf("%f",&b.prize); 
    printf("Enter isbn of book:");
    scanf("%s",b.isbn);
    printf("Book:%s\n",b.name);
    printf("Athur:%s\n",b.athur);
    printf("year:%d\n",b.year);
    printf("prize:%d\n",b.prize);
    printf("isbn:%s\n",b.isbn);
    
    
}
*/



/*
#include<stdio.h>
struct book{
    char name[100];
    char athur[100];
    int year;
    float prize;
    char isbn[100];
};
int main(){
    struct book b[5];
    for(int i=0;i<5;i++){
    
    printf("Enter the name of book:");
    scanf("%s",b[i].name);
    printf("Enter the name of athur :");
    scanf("%s",b[i].athur);
    printf("Enter year of book:");
    scanf("%d",&b[i].year);
    printf("Enter prize of book:");
    scanf("%f",&b[i].prize); 
    printf("Enter isbn of book:");
    scanf("%d",b[i].isbn);
    }
    for(int i=0;i<5;i++){
    printf("Book:%s\n",b[i].name);
    printf("Athur:%s\n",b[i].athur);
    printf("year:%d\n",b[i].year);
    printf("prize:%d\n",b[i].prize);
    printf("isbn:%d\n",b[i].isbn);
    }
    
    
}*/

/*
#include<stdio.h>
struct car{
    char name[100];
    char model[100];
    int hp;
    float prize;
    
};
int main(){
    struct car c[5];
    for(int i=0;i<5;i++){
    
    printf("Enter the name of car:");
    scanf("%s",c[i].name);
    printf("Enter the model :");
    scanf("%s",c[i].model);
    printf("Enter horsepower:");
    scanf("%d",&c[i].hp);
    printf("Enter prize:");
    scanf("%f",&c[i].prize); 
    }
    for(int i=0;i<5;i++){
    printf("Car Brand:%s\n",c[i].name);
    printf("Model:%s\n",c[i].model);
    printf("Horsepower:%d\n",c[i].hp);
    printf("prize:%d\n",c[i].prize);
    }
    
    
}
*/


/*

//structure to display about student,car and book
#include <stdio.h>

struct car {
    char name[100];
    char model[100];
    int hp;
    float prize;
};

int main() {
    struct car c[3], temp;

    // Input details for cars
    for (int i = 0; i < 3; i++) {
        printf("Enter the name of car: ");
        scanf(" %[^\n]", c[i].name);

        printf("Enter the model: ");
        scanf(" %[^\n]", c[i].model);

        printf("Enter horsepower: ");
        scanf("%d", &c[i].hp);

        printf("Enter prize: ");
        scanf("%f", &c[i].prize);

        printf("\n");
    }

    // Sorting cars in descending order of prize
    for (int i = 0; i < 3 - 1; i++) {
        for (int j = 0; j < 3 - i - 1; j++) {
            if (c[j].prize < c[j + 1].prize) {  // Sorting in descending order
                temp = c[j];
                c[j] = c[j + 1];
                c[j + 1] = temp;
            }
        }
    }

    // Output sorted car details
    printf("\n--- Cars sorted by Prize (Highest to Lowest) ---\n");
    for (int i = 0; i < 3; i++) {
        printf("Car Brand: %s\n", c[i].name);
        printf("Model: %s\n", c[i].model);
        printf("Horsepower: %d horsepower\n", c[i].hp);
        printf("Prize: %.2f\n", c[i].prize);
        printf("\n");
    }

    return 0;
}
*/



/*#include <stdio.h>

struct car {
    char name[100];
    char model[100];
    int hp;
    float prize;
};

// Sorting function (Bubble Sort in descending order)
void sort(struct car c[]) {
    struct car temp; 
    for (int i = 0; i < 3 - 1; i++) {
        for (int j = 0; j < 3 - i - 1; j++) {
            if (c[j].prize < c[j + 1].prize) {  
                temp = c[j];
                c[j] = c[j + 1];
                c[j + 1] = temp;
            }
        }
    }
}

int main() {
    struct car c[3];
    for (int i = 0; i < 3; i++) {
        printf("Enter the name of car: ");
        scanf(" %[^\n]", c[i].name);

        printf("Enter the model: ");
        scanf(" %[^\n]", c[i].model);

        printf("Enter horsepower: ");
        scanf("%d", &c[i].hp);

        printf("Enter prize: ");
        scanf("%f", &c[i].prize);
        printf("\n");
    }

    sort(c);

  
    printf("\n--- Cars sorted by Prize (Highest to Lowest) ---\n");
    for (int i = 0; i < 3; i++) {
        printf("Car Brand: %s\n", c[i].name);
        printf("Model: %s\n", c[i].model);
        printf("Horsepower: %d horsepower\n", c[i].hp);
        printf("Prize: %.2f\n", c[i].prize);
        printf("\n");
    }

    return 0;
}*/

#include<stdio.h>
struct book {
  char name[50];
  char isbn[20];
  int price;
};
void sort (struct book b[3]){
  struct book temp;
  for(int i=0;i<3-1;i++){
    for(int j=1;j<3-i-1;j++){
      if(b[j].price<b[j+1].price){
        temp=b[j];
        b[j]=b[j+1];
        b[j+1]=temp;
      }
    }
  }
}
int main(){
  struct book b[3];
  for(int i=0;i<3;i++){
    printf("Enter the name of book:");
    fgets(b[i].name,sizeof(b[i].name),stdin);
    printf("Enter the isbin of book:");
    fgets(b[i].isbn,sizeof(b[i].isbn),stdin);
    printf("Enter the price of book:");
    scanf("%d",&b[i].price);
  }
  sort(b);
  printf("Result in order:\n");
    for(int i=0;i<3;i++){
    printf("Name of book:%s\n",b[i].name);
    printf("Isbin of book:%s\n",b[i].isbn);
    printf("Price of book:%d\n",b[i].price);
  }
  return 0;
  
  
}



