#include<stdio.h>
int main(void)
{
	int n;
	scanf("%d",&n);
	int i,j,k;
	int a,b,c;
	int num[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
	}
	int copy[n];
	for(i=0;i<n;i++)
	{
		copy[i]=num[i];
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
				b=0;
				c=999;
				for(a=0;a<n-1;a++)
				{
					if(num[a+1]-num[a]>b)
					b=num[a+1]-num[a];
					if(num[a+1]-num[a]<c)
					c=num[a+1]-num[a];
				}
				printf("%d %d",b,c);
				return 0;
			}
			
		}
	}
	if(i==n-1)
	{
		for(a=0;a<n;a++)
		{
			for(b=0;a<n;b++)
			{
				if(copy[b]==num[a])
				{
					printf("%d ",b+1);
					break;
				}
			}
		}
		return 0;
	}
}
