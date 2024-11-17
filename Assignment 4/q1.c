#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int userChoice;
    int computerChoice;
    srand(time(0));
    printf("Welcome to Rock-Paper-Scissors Game!\n");
    printf("Choose:\n");
    printf("0 - Rock\n");
    printf("1 - Paper\n");
    printf("2 - Scissors\n");
    printf("Enter your choice (0/1/2): ");
    scanf("%d", &userChoice);
    if (userChoice < 0 || userChoice > 2) {
        printf("Invalid choice! Please choose 0, 1, or 2.\n");
        return 1; 
    }
    int randomNum = rand() % 100; 
    if (randomNum < 34) {
        computerChoice = 0; 
    } else if (randomNum < 67) {
        computerChoice = 1; 
    } else {
        computerChoice = 2; 
    }
    printf("Your choice: ");
    switch (userChoice) {
        case 0: printf("Rock\n"); break;
        case 1: printf("Paper\n"); break;
        case 2: printf("Scissors\n"); break;
    }

    printf("Computer's choice: ");
    switch (computerChoice) {
        case 0: printf("Rock\n"); break;
        case 1: printf("Paper\n"); break;
        case 2: printf("Scissors\n"); break;
    }
    if (userChoice == computerChoice) {
        printf("It's a tie!\n");
    } else if ((userChoice == 0 && computerChoice == 2) || 
               (userChoice == 1 && computerChoice == 0) || 
               (userChoice == 2 && computerChoice == 1)) {
        printf("You win!\n");
    } else {
        printf("Computer wins!\n");
    }

    return 0;
}

