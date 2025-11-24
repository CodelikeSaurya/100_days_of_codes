#include <stdio.h>

int main() {
    float radius, area , circumference;
     printf("Enter the radius of circle");
    scanf("%f",& radius);
    printf("Enter the area of circle");
    scanf("%f",& area);
    printf("Enter the circumference of circle");
    scanf("%f",& circumference);
    
    area = radius * radius * 3.14;
    circumference = 2 * 3.14 * radius;

    printf("area of circle = %.2f\n", area);
    printf("circumfrence of circle = %2f\n", circumference);
    
    return 0;
}