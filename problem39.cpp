#include<stdio.h>
int main(void)
{
	int m,n;
	scanf("%d %d",&m,&n);
	int nums[m][n];
	int i,j,k;
	for(i=0;i<m;++i)
	{
		for(j=0;j<n;++j)
		{
			scanf("%d",&nums[i][j]);
		}
	}
	int t=0,s,q=0;
	for(i=0;i<n;++i)
	{
		for(j=0;j<m;++j)
		{
			if(nums[j][i]>nums[t][i])
			{
				t=j;
			}
			if(j==m-1)
			{
				for(s=0;s<n;++s)
				{
					if(nums[t][i]>nums[t][s])
					{
						q++;
						break;
					}
				}
				if(s==n)
				{
					printf("%d %d %d\n",t,i,nums[t][i]);
				}
			}
		}
	}
	if(q==n)
	{
		printf("no\n");
	}
	return 0;
}
