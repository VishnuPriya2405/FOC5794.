#include<stdio.h>
int main()
{
	int i,n=5,j,k=1;
	for(i=1;i<=(n*2)-1;i++)
	{
		for(j=1;j<=k;j++)
		{
			if(j==1||j==k)
			printf("*");
			else printf(" ");
		}
		if (i>=n)
		k=k-1;
		else
		k=k+1;
		printf("\n");
	}
	return 0;
}
