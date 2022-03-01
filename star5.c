#include<stdio.h>
int main()
{
	int a,b,n;
	printf("enter the half of limits:");
	scanf("%d",&n);
	for(a=1;a<=n;a++,printf("\n"))
	{
		for(b=1;b<n*2;b++)
		{
			if(b<=a || b>=n*2-a)
				printf("*");
			else
				printf(" ");
		}
	}
}
