#include <stdio.h>

int main() {
    int num, digit, product = 1;
    int foundOdd = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        digit = num % 10;

        if (digit % 2 != 0) {
            product = product * digit;
            foundOdd = 1;
        }

        num = num / 10;
    }

    if (foundOdd == 1) {
        printf("Product of odd digits = %d\n", product);
    } else {
        printf("No odd digits found\n");
    }

    return 0;
}