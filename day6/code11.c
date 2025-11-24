//Write a program to input an integer and check whether it is even or odd using if–else.


#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    
    scanf("&d",&num);

    if(num % 2 == 0){
        printf("num is even");
    }
    else{
        printf("num is odd");
    }

    return 0;
}