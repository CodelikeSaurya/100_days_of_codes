//write a program to input two numbers and display their sum, difference, product, and quotient.




#include <stdio.h>

int main() {
    float num1, num2, sum, diff, prod, quot;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);

    // Calculations
    sum = num1 + num2;
    diff = num1 - num2;
    prod = num1 * num2;

    // Check division by zero
    if (num2 != 0)
        quot = num1 / num2;
    else {
        printf("Division by zero is not allowed!\n");
        return 0;
    }

    // Display results
    printf("\nSum = %.2f", sum);
    printf("\nDifference = %.2f", diff);
    printf("\nProduct = %.2f", prod);
    printf("\nQuotient = %.2f\n", quot);

    return 0;
}
