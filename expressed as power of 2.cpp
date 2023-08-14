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
        int power = 0;
        int temp = N;

        while (temp > 1) 
		{
            temp /= 2;
            power++;
        }
        printf("%d can be expressed as 2^%d.\n", N, power);
    } else 
	{
        printf("%d cannot be expressed as a power of 2.\n", N);
    }
    return 0;
}