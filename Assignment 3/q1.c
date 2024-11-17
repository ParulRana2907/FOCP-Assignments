#include <stdio.h>
#include <math.h> 

void main() {
    int z = 1;
    while (z == 1) {
        printf("\n\nx-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x");
        
        printf("\n\nWhat function do you want to perform?\n\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Remainder\n");
        printf("6. Logarithm (base e)\n");
        printf("7. Square Root\n");
        printf("\nType (1/2/3/4/5/6/7)\n>> ");

        int user_input;
        scanf("%d", &user_input);

        if (user_input == 1) {
            int a, b;
            printf("\nEnter a number: ");
            scanf("%d", &a);
            printf("Enter a number: ");
            scanf("%d", &b);
            int c = a + b;
            printf("\nAdding %d and %d will give us %d", a, b, c);
        } else if (user_input == 2) {
            int a, b;
            printf("\nEnter a number: ");
            scanf("%d", &a);
            printf("Enter a number: ");
            scanf("%d", &b);
            int c = a - b;
            printf("\nSubtracting %d from %d will give us %d", b, a, c);
        } else if (user_input == 3) {
            int a, b;
            printf("\nEnter a number: ");
            scanf("%d", &a);
            printf("Enter a number: ");
            scanf("%d", &b);
            int c = a * b;
            printf("\nMultiplying %d and %d will give us %d", a, b, c);
        } else if (user_input == 4) {
            int a, b;
            printf("\nEnter a number: ");
            scanf("%d", &a);
            printf("Enter a number: ");
            scanf("%d", &b);
            if (b != 0) {
                float c = (float)a / b; 
                printf("\nDividing %d by %d will give us %.2f", a, b, c);
            } else {
                printf("\nError: Division by zero is not allowed.");
            }
        } else if (user_input == 5) {
            int a, b;
            printf("\nEnter a number: ");
            scanf("%d", &a);
            printf("Enter a number: ");
            scanf("%d", &b);
            int c = a % b;
            printf("\nRemainder of %d and %d after dividing will be %d", a, b, c);
        } else if (user_input == 6) {
            double a;
            printf("\nEnter a number: ");
            scanf("%lf", &a);
            if (a > 0) {
                double c = log(a); 
                printf("\nLogarithm (base e) of %.2f is %.2f", a, c);
            } else {
                printf("\nError: Logarithm is not defined for non-positive numbers.");
            }
        } else if (user_input == 7) {
            double a;
            printf("\nEnter a number: ");
            scanf("%lf", &a);
            if (a >= 0) {
                double c = sqrt(a); 
                printf("\nSquare root of %.2f is %.2f", a, c);
            } else {
                printf("\nError: Square root is not defined for negative numbers.");
            }
        } else {
            printf("x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x\n");
            printf("\n\t\"Choose an appropriate option \"\n\n");
            continue;
        }
    }
}

