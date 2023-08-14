#include <stdio.h>

int main() {
    int numbers[10];
    
    printf("Enter 10 numbers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
    }
    
    for (int i = 0; i < 8; i++) {
        if (numbers[i] == numbers[i+1] && numbers[i] == numbers[i+2]) {
            printf("1\n");
            return 0;
        }
    }
    
    printf("0\n");
    return 0;
}
