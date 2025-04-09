#include <stdio.h>
#include<string.h>

int main() {
    int letter=0,word=1,i;
    char sen[1000];
    printf("Enter a word you want:\n");
    fgets(sen, sizeof(sen), stdin);
    for(i=0;sen[i]!='\0';i++)
    {  if (sen[i]!=' '&& sen[i]!='.'&& sen[i]!='\n')
      {
        letter++;
      }
      if (sen[i]==' ')
      {
        word++;
      }
    }
    printf("Total letter are:%d",letter);
    printf("Total word are:%d",word);

    return 0;
}