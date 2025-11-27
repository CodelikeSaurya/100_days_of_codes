//Write a program to display the month name and number of days using switch-case for a given month number.


#include <stdio.h>

int main() {
    
    int month;
    printf("Enter the month number (1-12): ");
    scanf("%d", &month);
    switch(month) {
        case1:
        printf("January - 31 days\n");
        break;
        case2:
        printf("february - 28/29 days\n");
        break;
        case3:
        printf("March - 31 days\n");
        break;
        case4:
        printf("April - 30 days \n");
        break;
        case5:
        printf("May - 31 days\n");
        break;
        case6:
        printf("June - 30 days\n");
        break;
        case7:
        printf("July - 31days\n");
        break;
        case8:
        printf("August - 31days\n");
        break;
        case9:
        printf("September - 30 days\n");
        break;
        case10:
        printf("October - 31 days\n");
        break;
        case11:
        printf("November - 30 days\n");             


    }
    return 0;
}