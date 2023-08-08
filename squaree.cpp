#include <stdio.h>
void printEmptySquare(int size) 
{
    for (int i = 1; i <= size; i++) 
	{
        for (int j = 1; j <= size; j++) 
		{
            if (i == 1 || i == size || j == 1 || j == size) 
			{
                printf("* ");
            } else 
			{
                printf("  ");
            }
        }
        printf("\n");
    }
}
int main() 
{
    int size;
    printf("Enter the size of the square: ");
    scanf("%d", &size);
    if (size < 2) 
	{
        printf("Size should be greater than or equal to 2.\n");
        return 1;
    }
    printEmptySquare(size);
    return 0;
}
