#include <stdio.h>
int main()
{
	int amt,n500,n200,n100,n50,n20,n10;
	scanf("%d",&amt);
	n500=amt/500;
	amt=amt%500;
	n200=amt/200;
	amt=amt%200;
	n100=amt/100;
	amt=amt%100;
	n50=amt/50;
	amt=amt%50;
	n20=amt/20;
	amt=amt%20;
	n10=amt/10;
	printf("500*%d\n200*%d\n100*%d\n50*%d\n20*%d\n10*%d",n500,n200,n100,n50,n20,n10);
}
