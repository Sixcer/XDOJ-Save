#include<stdio.h>
int main (void)
{
	int n;
	scanf("%d",&n);
	int nums[n+2][n+2];
	int i,j,k;
	for(i=0;i<n+2;++i)
	{
		for(j=0;j<n+2;++j)
		{
			nums[i][j]=0;
		}
	}
	for(i=1;i<n+1;++i)
	{
		for(j=1;j<n+1;++j)
		{
			scanf("%d",&nums[i][j]);
		}
	}
	
	int sum=0,a,b,c;
	for(i=1;i<n+1;++i)
	{
		for(j=1;j<n+1;++j)
		{
			for(a=-1;a<2;++a)
			{
				for(b=-1;b<2;++b)
				{
					sum+=nums[i+a][j+b];
				}
			}
			c=sum/9.0+0.5;
			printf("%d ",c);
			sum=0;
		}
		putchar('\n');
	}
}
