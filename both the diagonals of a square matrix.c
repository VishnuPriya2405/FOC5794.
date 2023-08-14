#include <stdio.h>

int main() {
    int order;
    printf("Enter the order of the matrix: ");
    scanf("%d", &order);

    int matrix[order][order];

    printf("Enter the matrix elements:\n");
    for (int i = 0; i < order; i++) {
        for (int j = 0; j < order; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int sumDiagonal1 = 0;
    int sumDiagonal2 = 0;

    for (int i = 0; i < order; i++) {
        for (int j = 0; j < order; j++) {
            if (i == j) {
                sumDiagonal1 += matrix[i][j];
            }
            if (i + j == order - 1) {
                sumDiagonal2 += matrix[i][j];
            }
        }
    }

    // Subtract the middle element if the order is odd
    if (order % 2 == 1) {
        int middle = order / 2;
        sumDiagonal1 -= matrix[middle][middle];
        sumDiagonal2 -= matrix[middle][middle];
    }

    printf("Sum of diagonal 1: %d\n", sumDiagonal1);
    printf("Sum of diagonal 2: %d\n", sumDiagonal2);

    return 0;
}
