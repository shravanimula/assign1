#include<stdio.h>
int main()
{
	int i,j,n,k,a=1;
	printf("enter the number of elements:");
	scanf("%d",&n);
	for(i=n;i>0;i--,printf("\n"))
	{
		for(j=1;j<=n;j++)
		{
			if(j<=i-1)
				printf(" ");
			else
				printf("*");
			printf(" ");
		}
  	/*	for(j=1;j<=i;j++)
	    		printf("* ");
   		printf("\n");*/
	}
}

