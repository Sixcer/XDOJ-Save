#include<stdio.h>
int main(void)
{
	int m,n;
	scanf("%d %d",&m,&n);
	int nums[n][m];
	int i,j;
	for(i=0;i<n;++i)
	{
		for(j=0;j<m;++j)
		{
			scanf("%d",&nums[i][j]);
		}
	}
	int a,b,c;
	int op[16]={0};
	for(i=0;i<n;++i)
	{
		for(j=0;j<m;++j)
		{
			for(a=0;a<16;++a)
			{
				if(nums[i][j]==a)
				{
					op[a]+=1;
				}
			}
		}
	}
	for(a=0;a<16;++a)
	{
		if(op[a]!=0)
		printf("%d %d\n",a,op[a]);
	}
	return 0;
}
