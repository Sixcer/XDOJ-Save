#include<stdio.h>
int main(void)
{
	int n,m;
	scanf("%d %d",&n,&m);
	int nums[n][m];
	int i,j;
	for(i=0;i<n;++i)
	{
		for(j=0;j<m;++j)
		{
			scanf("%d",&nums[i][j]);
		}
	}
	for(i=0;i<m;++i)
	{
		for(j=n-1;j>=0;--j)
		{
			printf("%d ",nums[j][i]);
		}
		putchar('\n');
	}
	return 0;
}
