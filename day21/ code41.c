#include <stdio.h>
#include <math.h>

int main() {
    int num, first, last, digits, pow10, middle;

    printf("Enter a number: ");
    scanf("%d", &num);

    last = num % 10;      // last digit
    first = num;

    while (first >= 10) { // extract first digit
        first /= 10;
    }

    digits = (int)log10(num);     // number of digits - 1
    pow10 = (int)pow(10, digits); // 10^(n-1)

    middle = num % pow10;         // remove first digit
    middle = middle / 10;          // remove last digit region

    // Construct new number
    int swapped = last * pow10 + middle * 10 + first;

    printf("Number after swapping first and last digit = %d\n", swapped);

    return 0;
}



