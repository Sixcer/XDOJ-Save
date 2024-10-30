#include<stdio.h>
int main(void)
{
	int n,k;
	scanf("%d%d",&n,&k);
	int a=n;
	while(a>=k)
	{
		n+=a/k;
		a=a%k+a/k;
	}
	printf("%d",n);
	return 0;
}
