#include<stdio.h>
int main(void)
{
	int m;
	scanf("%d",&m);
	int nums[m][m];
	int sums[2*m+2];
	for(int i=0;i<m;++i)
	{
		for(int j=0;j<m;++j)
		{
			scanf("%d",&nums[i][j]);
		}
	}
	int n=0,a=0;
	for(int i=0;i<m;++i)
	{
		for(int j=0;j<m;++j)
		{
			n+=nums[i][j];
			if(j==m-1)
			{
				sums[a]=n;
				n=0;
				++a;
			}
		}
	}
	for(int i=0;i<m;++i)
	{
		for(int j=0;j<m;++j)
		{
			n+=nums[j][i];
			if(j==m-1)
			{
				sums[a]=n;
				n=0;
				++a;
			}
		}
	}
	for(int i=0,j=0;i<m&&j<m;++j,++i)
	{
			n+=nums[i][j];
			if(j==m-1)
			{
				sums[a]=n;
				n=0;
				++a;
			}
	}
	for(int i=0,j=m-1;i<m&&j>=0;--j,++i)
	{
			n+=nums[i][j];
			if(i==m-1)
			{
				sums[a]=n;
				n=0;
				++a;
			}
	}
	for(int i=0;i<2*m+1;++i)
	{
		for(int j=0;j<2*m+1-i;++j)
		{
			if(sums[j]<sums[j+1])
			{
			a=sums[j];
			sums[j]=sums[j+1];
			sums[j+1]=a;
			}
		}
	}
	for(int i=0;i<2*m+2;++i)
	{
		printf("%d ",sums[i]);
	}
	printf("\n");
}
