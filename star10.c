#include<stdio.h>
int main()
{
	int a,b,n,B;
	printf("enter the number of elements:");
	scanf("%d",&n);//n=3
	for(a=0;a<=n;a++,printf("\n"))//a=0,1,2,3
	{
		for(b=n;b>=-n;b--)//b=3,2,1,0,-1,-2,-3
		{
			B=b;if(B<0) B=-B;
			if(B<=a)//3<=0,2<=0,1<=0,0<=0,1<=0
				printf("*");
			else
			      	printf(" ");
		}
	}
}
