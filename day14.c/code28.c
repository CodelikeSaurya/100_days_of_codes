#include <stdio.h>

int main() {
    int n;
    long long product = 1;  // Use long long to store large results

    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i += 2) {
        product *= i;   // Multiply only even numbers
    }

    printf("Product of even numbers from 1 to %d = %lld\n", n, product);

    return 0;
}
