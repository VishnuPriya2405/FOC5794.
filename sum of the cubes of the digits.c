#include <stdio.h>

int main() {
    int num, originalNum, digit, sum = 0;
    
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    originalNum = num;

    while (num > 0) {
        digit = num % 10;
        sum += digit * digit * digit;
        num /= 10;
    }

    printf("The sum of the cubes of the digits of %d is: %d\n", originalNum, sum);

    return 0;
}
