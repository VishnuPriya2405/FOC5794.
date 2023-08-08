#include <stdio.h>
int main() {
    int rows;
    printf("Enter the number of rows for the inverted right-angled triangle: ");
    scanf("%d", &rows);
    for (int i = 0; i < rows; i++)
	 {
        for (int j = i; j < rows; j++) 
		{
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
