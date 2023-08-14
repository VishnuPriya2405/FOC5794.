#include <stdio.h>
int isPowerOfTwo(int n)
{
    if (n <= 0)
        return 0;   
    return (n & (n - 1)) == 0;
}

int main() 
{
    int N;
    printf("Enter a number: ");
    scanf("%d", &N);
    if (isPowerOfTwo(N)) 
	{
        printf("%d can be expressed as a power of 2.\n", N);
    } else 
	{
        printf("%d cannot be expressed as a power of 2.\n", N);
    }

    return 0;
}