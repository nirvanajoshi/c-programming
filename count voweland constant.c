#include <stdio.h>
#include<string.h>

int main() {
        int vowel=0,consonants=0,i;
    char sen[1000];
    printf("Enter a word you want:\n");
    fgets(sen, sizeof(sen), stdin);
    for(i=0;sen[i]!='\0';i++)
             {  if (sen[i]=='A'||sen[i]=='E'||sen[i]=='I'||sen[i]=='O'||sen[i]=='U'||sen[i]=='a'||sen[i]=='e'||sen[i]=='i'||sen[i]=='o'||sen[i]=='u')
                  {
                     vowel++;
                }
                 else if ((sen[i] >= 'A' && sen[i] <= 'Z') || (sen[i] >= 'a' && sen[i] <= 'z'))
                 {
                       consonants++;
     
                }
                 
             }
    printf("vowel:%d\n",vowel);
    printf("consonent:%d\n",consonants);

    return 0;
}/*// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>
void revs (char op[],char rev[]){
    int len=0;
    for(int i=0;op[i]!='\0';i++){
       len++; 
    }
     if (op[len - 1] == '\n') {
        op[len - 1] = '\0';
        len--;  
    }
    for(int i=0;i<len;i++){
        rev[i]=op[len-i-1];
    }
    rev[len]='\0';
}

int main() {
    char op[100];char rev[100];
    printf("Enter any string:");
    fgets(op,sizeof(op),stdin);
    revs(op,rev);
    if (strcmp(rev,op)==0)
    {
        printf("plidrome string");
        
    }
    else{
        printf("not a pallidromr");
        
    }
    
    return 0;
}*/
