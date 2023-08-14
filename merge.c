#include <stdio.h>

int isElementRepeated(int arr[], int size, int num) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == num) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int size1, size2, newSize = 0;

    printf("Enter the size of the first array: ");
    scanf("%d", &size1);

    printf("Enter the elements of the first array: ");
    int arr1[size1];
    for (int i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of the second array: ");
    scanf("%d", &size2);

    printf("Enter the elements of the second array: ");
    int arr2[size2];
    for (int i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    int mergedArray[size1 + size2];

    for (int i = 0; i < size1; i++) {
        mergedArray[newSize++] = arr1[i];
    }

    for (int i = 0; i < size2; i++) {
        if (!isElementRepeated(mergedArray, newSize, arr2[i])) {
            mergedArray[newSize++] = arr2[i];
        }
    }

    printf("Merged array after excluding repeating elements:\n");
    for (int i = 0; i < newSize; i++) {
        printf("%d ", mergedArray[i]);
    }
    printf("\n");

    return 0;
}
