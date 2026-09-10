#include <stdio.h>

int main() {
    long long binary, temp, complement = 0, place = 1;
    int digit;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    temp = binary;

    while (temp != 0) {
        digit = temp % 10;

        if (digit == 0)
            digit = 1;
        else if (digit == 1)
            digit = 0;
        else {
            printf("Invalid binary number\n");
            return 0;
        }

        complement = complement + digit * place;
        place = place * 10;
        temp = temp / 10;
    }

    printf("1's Complement = %lld\n", complement);

    return 0;
}