// WAP TO MAKE A SIMPLE CALCULATOR USING SWITCH STATEMENT.
#include <stdio.h>
#include <conio.h>
int main()
{
    char operator;
    float first, second;
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);
    printf("Enter two operands: ");
    scanf("%f %f", &first, &second);

    switch (operator)
    {
    case '+':
        printf("%.2f + %.2f = %.2f", first, second, first + second);
        break;
    case '-':
        printf("%.2f - %.2f = %.2f", first, second, first - second);
        break;
    case '*':
        printf("%.2f * %.2f = %.2f", first, second, first * second);
        break;
    case '/':
        printf("%.2f / %.2f = %.2f", first, second, first / second);
        break;
    default:
        printf("Error! operator is not correct");
    }

    return 0;
}