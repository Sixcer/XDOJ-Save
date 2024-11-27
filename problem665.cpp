#include<stdio.h>
int main(void)
{
	int m,n;
	scanf("%d %d",&m,&n);
	int nums[m*n];
	int i,j,k;
	for(i=0;i<m*n;++i)
	{
		scanf("%d",&nums[i]);
	}
	for(i=0;i<m*n-1;++i)
	{
		for(j=0;j<m*n-1-i;++j)
		{
			if(nums[j]<nums[j+1])
			{
				k=nums[j];
				nums[j]=nums[j+1];
				nums[j+1]=k;
			}
		}
	}
	for(i=0;i<m;++i)
	{
		if(i%2==0)
		{
			for(j=i*n,k=0;k<n;++k,++j)
			{
				printf("%d ",nums[j]);
			}
			putchar('\n');
		}
		else
		{
			for(j=i*n+n-1,k=0;k<n;++k,j--)
			{
				printf("%d ",nums[j]);
			}
			putchar('\n');
		}
	}
	return 0;
}
