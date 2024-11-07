#include<stdio.h>
int add(int);
int main(void)
{
	int a;
	scanf("%d",&a);
	while(a>=10)
	{
		a=add(a);
	}
	printf("%d",a);
}
int add(int n)
{
	int i=0;
	while(n>0)
	{
		i+=n%10;
		n/=10;
	}
	return i;
}
