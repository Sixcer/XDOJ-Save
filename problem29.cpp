#include<stdio.h>
int main(void)
{
	int n,m=0;
	scanf("%d",&n);
	while(n>0)
	{
		m=m+n%10;
		n=n/10;
	}
	printf("%d",m);
	return 0;
}
