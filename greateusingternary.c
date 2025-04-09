#include <stdio.h>

int main()
{
    int number1, number2,number3;

    // Prompt the user for input
    printf("Enter the first number: ");
    scanf("%d", &number1);
    printf("Enter the second number: ");
    scanf("%d", &number2);
    printf("Enter the third number: ");
    scanf("%d", &number3);

    // Check which number is greater or if they are equal
    (number1>number2 && number1>number3)?printf("%d is greater number",number1):
    (number2>number1 && number2>number3)?printf("%d is greater",number3):printf("%d is greater number",number3);
    return 0;
}
