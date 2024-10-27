#include<stdio.h>
int main(void)
{
	int m,n;
	scanf("%d",&m);
		for(n=m*m-m+1;n<=m*m+m-1;n+=2)
		{
			printf("%d ",n);
		}
		return 0;
}
