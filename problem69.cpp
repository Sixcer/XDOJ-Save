#include<stdio.h>
int main(void)
{
	int m,n;
	scanf("%d %d",&m,&n);
	int i,j;
	int nums[m][n];
	for(i=0;i<m;++i)
	{
		for(j=0;j<n;++j)
		{
			scanf("%d",&nums[i][j]);
		}
	}
	int s=-1,l=0,k=0;
	for(i=0;i<m;++i)
	{
		for(j=0;j<n;++j)
		{
			if(nums[i][j]==1)
			{
				++k;
				if(j==n-1||nums[i][j+1]==0)
				{
					if(k>l)
					{
						l=k;
						s=j-l+1;
					}
					k=0;
				}
			}
		}
		if(l!=0)
		printf("%d %d\n",s,s+l-1);
		else
		printf("-1 -1\n");
		s=-1;
		k=0;
		l=0;
	}
}
