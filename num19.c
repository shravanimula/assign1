#include<stdio.h>
int main()
{
	int i,j,n,a=1;
	printf("enter the number of elements:");
	scanf("%d",&n);
	for(i=0;i<n;i++,printf("\n"))
	{
		for(j=0;j<=i;j++)
		{
			if(i%2==0)
			{
				printf("%d ",a);
			}
			else
			{
				printf("* ");
			}
		}
		if(i%2==0)
		{
			a++;
		}
	}
}
