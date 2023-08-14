#include <stdio.h>
int main() {
    int n, sum = 0;
    printf("Enter a value for n: ");
    scanf("%d", &n);   
    for (int i = 0; i <= 2 * n; i += 2) {
        if (i % 3 == 0) {
            sum += i;
        }
    }
    printf("Sum of even numbers divisible by 3 from 0 to %d: %d\n",n, sum);
    return 0;
}