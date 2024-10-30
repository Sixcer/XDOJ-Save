#include<stdio.h>
int main(void)
{
	int n=0,m=0,two[33];
	scanf("%d",&n);
	if(n%2==1)
	{
		printf("-1");
		return 0;
	}
	for(m=0;n>0;m++)
	{
		two[m]=n%2;
		n/=2;
	}
	m--;
	int i=m,j;
	while(m>-1)
	{
		j=two[m];
		for(i=m;i>0;i--)
		{
			j*=2;
		}
		if(j!=0)
		{
			printf("%d ",j);
		}
		m--;
	}
	return 0;
}
