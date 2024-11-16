// 4) NESTED-IF

/*
In C, a nested if statement means an if statement inside another if statement.
The syntax for nested if is as follows:

syntex:-
if (condition1) {
    // Executes if condition1 is true
    if (condition2) {
        // Executes if both condition1 and condition2 are true
        // Code for the inner if block
    } else {
        // Executes if condition1 is true but condition2 is false
    }
} else {
    // Executes if condition1 is false
}

*/
// EXAMPLE OF NESTED-IF

#include <stdio.h>

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num >= 0) {
        printf("The number is positive .\n");
        // Outer if: checks if number is non-negative
        if (num % 2 == 0) {
            // Inner if: checks if the number is even
            printf("The number is positive and even.\n");
        } else {
            // Executes if the number is positive but odd
            printf("The number is positive and odd.\n");
        }
    } else {
        // Executes if the number is negative
        printf("The number is negative.\n");
    }
    
    return 0;
}
