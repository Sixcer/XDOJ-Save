#include<stdio.h>
unsigned long long fact(int);
int main(void)
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;++i)
	{
		printf("%llu ",fact(i));
	}
	return 0;
}
unsigned long long fact(int n)
{
	unsigned long long i=1;
	while(n>0)
	{
		i*=n;
		n--;
	}
	return i;
}
