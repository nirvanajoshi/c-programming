#include<stdio.h>
#include <string.h>

int main(){
    char n[5][100] = {"damodar","nishan","sid","safal","bikash"};
    char temp[100];
    for(int i=0;i<5-1;i++){
        int min = i;
        for (int j=i+1;j<5;j++){
            if(strcmp(n[j],n[min])<0){
                min = j;
            }
            if(min!=i){
                strcpy(temp,n[i]);
                strcpy(n[i],n[min]);
                strcpy(n[min],temp);
            }
        }
    }
    for(int i=0;i<5;i++){
        printf("%s\t",n[i]);
    }
}
    
    