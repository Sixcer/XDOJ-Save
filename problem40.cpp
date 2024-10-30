#include<stdio.h>
int main(void)
{
	int n;
	scanf("%d",&n);
	int i,j,k;
	int num[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(num[j]>num[j+1])
			{
				k=num[j];
				num[j]=num[j+1];
				num[j+1]=k;
			}
		}
	}
	for(i=0;i<n-1;i++)
	{
		j=num[i+1]-num[i];
		if(i==0)
		k=j;
		if(i>0)
		{
			if(k!=j)
			{
				printf("no");
				return 0;
			}
			
		}
	}
	if(i==n-1)
	{
		printf("%d",k);
		return 0;
	}
}
