#include<stdio.h>
int main()
{
	int a,b;
	printf("enter a:\n");
	scanf("%d",&a);
	printf("enter b:\n");
	scanf("%d",&b);
	if(a>b)
	{
		printf("maximum number: %d",a);
	}
	else
	{
		printf("maximum number :%d",b);
	}
	return 0;
}
