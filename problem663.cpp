#include<stdio.h>
int main(void)
{
	int nums[30]={0},m=0;
	int i,j,k;
	for(i=0;;++i)
	{
		scanf("%d",&nums[i]);
		if(getchar()=='\n')
		break;
	}
	++i;
	scanf("%d",&m);
	for(j=0;j<i;++j)
	{
		if(nums[j]!=m)
		{
			printf("%d ",nums[j]);
		}
	}
	return 0;
}
