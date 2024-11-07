#include<stdio.h>
void func1(int);
int main (void)
{
	int n;
	scanf("%d",&n);
	func1(n);
	return 0;
}
void func1(int n)
{
	if(n%2==0)
	{
		printf("NO");
		return;
	}
	int i;
	for(i=3;i*i<n;i+=2)
	{
		if(n%i==0)
		{
			printf("NO");
			return;
		}
	}
	if(i*i>n)
	{
		printf("YES");
		return;
	}
	else
	{
		printf("NO");
		return;
	}
}
