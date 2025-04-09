#include<stdio.h>
int main ()
{
  char name[50];
  int age;
  printf("Enter your name:");
  scanf("%s",&name);
  printf("Name address :%p \n",&name);

  printf("Enter your age:");
  scanf("%d",&age);
  printf("Age address:%p",&age);

  return 0;
}