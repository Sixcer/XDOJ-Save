#include<stdio.h>
int main(void)
{
	int n,i;
	scanf("%d",&n);
	int num[2*n];
	for(i=n;i<2*n;i++)
	{
		scanf("%d",&num[i]);
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
	}
	for(i=0;i<2*n;i++)
	{
	printf("%d ",num[i]);
	}
	return 0;
}
