#include<stdio.h>
int main()
{
	int a,b,n,B;
	printf("enter the number of elements:");
	scanf("%d",&n);
	for(a=n;a>=0;a--,printf("\n"))
	{
		for(b=n;b>=-n;b--)
		{
			B=b; if(B<0) B=-B;
			if(a>=B)
				printf("*");
		       	else
				printf(" ");
			printf(" ");
		}
	}
}
