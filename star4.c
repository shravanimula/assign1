#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter the number of elements:");
	scanf("%d",&n);
	for(i=1;i<=n;i++,printf("\n"))
	{
		for(j=1;j<=n;j++)
		{
			if(j>=i)
				printf("*");
			else
				printf(" ");
			printf(" ");
		}
	}
}
