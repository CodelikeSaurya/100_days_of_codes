#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int x = a, y = b;

    
    while (x != y) {
        if (x > y)
            x = x - y;
        else
            y = x - y;
    }

    printf("HCF (GCD) of %d and %d is: %d\n", a, b, x);

    return 0;
}
