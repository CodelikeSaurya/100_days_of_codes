#include <stdio.h>

int main() {
    int num, digit, product = 1;
    printf("Enter a number: ");
    scanf("%d", &num);

    int temp = num;
    int foundOdd = 0;

    while (temp > 0) {
        digit = temp % 10;

        if (digit % 2 != 0) {  // check odd digit
            product *= digit;
            foundOdd = 1;
        }

        temp /= 10;
    }

    if (foundOdd)
        printf("Product of odd digits = %d\n", product);
    else
        printf("No odd digits found!\n");

    return 0;
}
