#include<stdio.h>
int pow(int a,int b)
{
	if(b==0)
	return 1;
	else
	{
		int c=a;
		for(int i=1;i<b;++i)
		{
			a*=c;
		}
		return a;
	}
}
int main(void)
{
	int n,m;
	scanf("%d %d",&n,&m);
	int i,j,k;
	int b[m+1][pow(2,n)]={0};
	for(i=0;i<pow(2,n);++i)
	{
		scanf("%d",&b[0][i]);
	}
	for(i=1;i<m+1;++i)
	{
		for(j=0;j<pow(2,n-i);++j)
		{
			b[i][j]=b[i-1][j]+b[i-1][pow(2,n-i+1)-j-1];
		}
	}
	for(i=0;i<pow(2,n-m);++i)
	{
		printf("%d ",b[m][i]);
	}
	return 0;
}
