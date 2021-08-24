#include<stdio.h>
int main()
{
	int r,i,j,x;
	for(r=1;r<=5;r++)
	{
		for(i=1;i<=r;i++)
		printf("*");
		for(j=1;j<=9-2*r;j++)
		printf(" ");
		for(x=1;x<=r;x++)
		{
			if(x==5)
			break;
		
		printf("*");
	}
	printf("\n");
	}
}
