#include<stdio.h>
#include<string.h>

int main()
 {
    char text[10], cpy_text[10];
    printf("Enter text up to 10 characters: ");
    scanf("%s", text); 

    strcpy(cpy_text, strrev(text));  

    printf("The reverse of the above text is: %s", cpy_text);  
    return 0;
}
