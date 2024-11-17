#include <stdio.h>

int main() {
    int num1, num2, hcf;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    if (num1 < num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }
    while (num2 != 0) {
        hcf = num2;
        num2 = num1 % num2;
        num1 = hcf;
    }
    printf("HCF is: %d\n", hcf);

    return 0;
}

