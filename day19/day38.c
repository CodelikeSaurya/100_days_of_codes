#include <stdio.h>

int main() {
    int num, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    int temp = num;

    while (temp > 0) {
        digit = temp % 10;   // extract last digit
        sum += digit;        // add it to sum
        temp /= 10;          // remove last digit
    }

    printf("Sum of digits = %d\n", sum);

    return 0;
}

