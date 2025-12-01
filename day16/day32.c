#include <stdio.h>

int main() {
    int num, originalNum, reversed = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;  // Store original number

    while (num != 0) {
        remainder = num % 10;             // Extract last digit
        reversed = reversed * 10 + remainder;  // Build reversed number
        num /= 10;                         // Remove last digit
    }

    if (originalNum == reversed) {
        printf("%d is a palindrome.\n", originalNum);
    } else {
        printf("%d is not a palindrome.\n", originalNum);
    }

    return 0;
}
