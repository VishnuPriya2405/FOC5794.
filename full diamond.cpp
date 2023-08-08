#include <stdio.h>
void printSpaces(int spaces) 
{
    for (int i = 0; i < spaces; i++)
	{
        printf(" ");
    }
}

void printStars(int stars) 
{
    for (int i = 0; i < stars; i++) 
	{
        printf("* ");
    }
}

void printDiamond(int n) 
{
    for (int i = 1; i <= n; i++) 
	{
        printSpaces(n - i);
        printStars(2 * i - 1);
        printf("\n");
    }

    for (int i = n - 1; i >= 1; i--) 
	{
        printSpaces(n - i);
        printStars(2 * i - 1);
        printf("\n");
    }
}

int main() 
{
    int rows;
    printf("Enter the number of rows for the diamond: ");
    scanf("%d", &rows);
    printDiamond(rows);
    return 0;
}
