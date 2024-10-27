#include<stdio.h>
int main(void)
{
	int n,m;
	scanf("%d",&n);
	for(m=0;m*m<=n;m++)
	{
		if(m*m==n)
		{
			printf("%d",m);
			return 0;
		}
	}
	printf("no");
	return 0;
}
