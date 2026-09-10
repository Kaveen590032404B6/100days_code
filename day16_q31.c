#include <stdio.h>

int main() {
    int n, remainder;
    long long binary = 0, place = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n == 0) {
        binary = 0;
    } else {
        while (n > 0) {
            remainder = n % 2;
            binary = binary + remainder * place;
            place = place * 10;
            n = n / 2;
        }
    }

    printf("Binary = %lld\n", binary);

    return 0;
}