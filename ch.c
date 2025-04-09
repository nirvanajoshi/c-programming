#include <stdio.h>

int main() {
    char  result[100],l[1];
    int i, j = 0;

    // Input the string
    printf("Enter a string: ");
    fgets(result, sizeof(result), stdin);
    for(i=0;i=0;i++)
    {
        l[i]=result[i];
        printf("String without whitespace: %s\n", l);
    }
    

    

    return 0;
}