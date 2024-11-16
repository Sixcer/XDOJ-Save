#include<stdio.h>
int main(void)
{
	int A[2][3],B[3][2];
	int i,j;
	for(i=0;i<2;++i)
	{
		for(j=0;j<3;++j)
		{
			scanf("%d",&A[i][j]);
		}
	}
	for(i=0;i<3;++i)
	{
		for(j=0;j<2;++j)
		{
			scanf("%d",&B[i][j]);
		}
	}
	for(i=0,j=0;i<3;++i)
	{
		j+=A[0][i]*B[i][0];
	}
	printf("%d ",j);
	for(i=0,j=0;i<3;++i)
	{
		j+=A[0][i]*B[i][1];
	}
	printf("%d\n",j);
	for(i=0,j=0;i<3;++i)
	{
		j+=A[1][i]*B[i][0];
	}
	printf("%d ",j);
	for(i=0,j=0;i<3;++i)
	{
		j+=A[1][i]*B[i][1];
	}
	printf("%d\n",j);
}
