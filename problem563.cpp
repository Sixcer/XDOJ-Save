#include<stdio.h>
int main(void)
{
	int n,i,j,k=3;
	scanf("%d",&n);
	if(n<5)
	{
		printf("empty");
		return 0;
	}
	for(i=3;i<=n;i+=2)
	{
		for(j=2;j*j<i;++j)
		{
			if(i%j==0)
			break;
		}
		if(j*j>i)
		{
		if(i-k==2)
		printf("%d %d\n",k,i);
		k=i;
		}
	}
}
