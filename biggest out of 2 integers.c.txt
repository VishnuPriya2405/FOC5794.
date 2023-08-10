#include<stdio.h>
int main()
{
	int a,b,big;
	printf("enter any two number");
	scanf("%d%d",&a,&b);
	if(a>b)
	big=a;
	else
	big=b;
	printf("\nbiggest of two numbers is:%d",big);
	return 0;
}