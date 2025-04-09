#include <stdio.h>
int star (int i, int j);
int dandi (int i);
int main() 
{
    int s1=5,s2=5,s3=5;
    star(s1,s2);
    star(s1,s2);
    dandi (s3);
    return 0;
    
}
int star (int i, int j)
{
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");

    }
}
int dandi (int i)
{
    for(i=1;i<=5;i++)
    {
        printf("*");
        printf("\n");
    }
}