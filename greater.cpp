#include <stdio.h>

int main()
{
    int number1, number2;

    // Prompt the user for input
    printf("Enter the first number: ");
    scanf("%d", &number1);
    printf("Enter the second number: ");
    scanf("%d", &number2);

    // Check which number is greater or if they are equal
    if (number1 > number2)
    {
        printf("%d is the greater number\n", number1);
    }
    else if (number1 < number2)
    {
        printf("%d is the greater number\n", number2);
    }
    else
    {
        printf("Both numbers are equal\n");
    }

    return 0;
}
