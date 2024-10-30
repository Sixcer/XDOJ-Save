#include<stdio.h>
int main(void)
{
	int n;
	scanf("%d",&n);
	int i,j,k;
	for(n=n;n>0;n--)
	{
		scanf("%d",&i);
		k=1;
		for(j=i;j!=0;j/=10)
		{
			k*=10;
		}
		if(i==i*i%k)
		{
			printf("%d\n",i);
		}
		else
		{
			printf("No\n");
		}
	}
	return 0;
}
