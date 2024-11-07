#include<stdio.h>
int fib(int);
int main(void)
{
	int n;
	scanf("%d",&n);
	int i;
	for(i=1;i<=n;++i)
	{
		printf("%d ",fib(i));
	}
	return 0;
}
int fib(int n)
{
	if(n<3)
	return 1;
	int i=1,j=1,k,t;
	for(k=0;k<n-2;++k)
	{
		t=j;
		j+=i;
		i=t;
	}
	return j;
}
