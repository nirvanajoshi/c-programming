#include <stdio.h>
int main()
{
    char s1[100],rev[100];
    int i,length=0;          
    printf("Enter string s1:");     
    scanf("%s",s1);          
    while(s1[length]!='\0')   
    {
      length++ ; 
    }
    for (i = 0; i < length; i++)
     {
        rev[i] = s1[length - i - 1];
     }
    rev[length]='\0';
    printf("rev:%s",rev);
    return 0;
}
/*
#include <stdio.h>
#include<string.h>

int main() {
 char a[5][100]={"damodar","sanjib","safal","siddharth","bikash"};
 int len = 5;
 char temp[100];
 for(int i=0;i<len-1;i++){
    int min=i;
    for(int j=i+1;j<len;j++){
        if(strcmp( a[j],a[min])<0){
            min=j;
        }
    }
     if(min!=i){
            strcpy(temp,a[i]);
            strcpy(a[i],a[min]);
            strcpy(a[min],temp);
        }
 }
 for(int i=0;i<5;i++){
     printf("%s,",a[i]);
 }
 
 
    return 0;
}*/
