#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter the number of elements:");
	scanf("%d",&n);
	for(i=n;i>0;i--,printf("\n"))
	{
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
	}
}
