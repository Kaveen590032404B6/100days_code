#include <stdio.h>

int main() {
    int num, original, remainder, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while (num != 0) {
        remainder = num % 10;
        sum = sum + (remainder * remainder * remainder);
        num = num / 10;
    }

    if (sum == original) {
        printf("%d is an Armstrong Number\n", original);
    } else {
        printf("%d is Not an Armstrong Number\n", original);
    }

    return 0;
}