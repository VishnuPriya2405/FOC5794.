#include <stdio.h>
void removeDuplicates(int arr[], int *size) 
{
    for (int i = 0; i < *size; i++) 
	{
        for (int j = i + 1; j < *size; j++) 
		{
            if (arr[i] == arr[j]) 
			{
                for (int k = j; k < *size - 1; k++) 
				{
                    arr[k] = arr[k + 1];
                }
                (*size)--;
                j--;
            }
        }
    }
}
int main() 
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) 
	{
        scanf("%d", &arr[i]);
    }
    removeDuplicates(arr, &size);
    printf("Array after removing duplicates:\n");
    for (int i = 0; i < size; i++) 
	{
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}