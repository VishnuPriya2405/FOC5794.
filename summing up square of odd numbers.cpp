#include <stdio.h>
int main()
{
	int numbers[] = {1,2,3,4,5,6,7,8,9};
	for(int num=0; num < 9; num++)
	{
		if(numbers[num] % 2 == 1)
		{
			printf("%d ", numbers[num] * numbers[num]);
		}
	}
	return 0;
}
