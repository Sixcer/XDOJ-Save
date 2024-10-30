#include<stdio.h>
int main(void)
{
	int n,target;
	scanf("%d",&n);
	int num[n];
	int i,j,k,b,c;
	int a;
	for(i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
	}
	scanf("%d",&target);
	for(a=0;a<n-2;a++)
	{
		for(b=a+1;b<n-1;b++)
		{
			for(c=b+1;c<n;c++)
			{
				if(num[a]+num[b]+num[c]==target)
				{
					printf("%d",num[a]+num[b]+num[c]);
					return 0;
				}
				if(num[a]+num[b]+num[c]>target)
				i=num[a]+num[b]+num[c]-target;
				if(num[a]+num[b]+num[c]<target)
				i=target-num[a]-num[b]-num[c];
				if(c==2)
				{
					k=num[a]+num[b]+num[c];
					j=i;
				}
				if(c>2&&i<j)
				{
					k=num[a]+num[b]+num[c];
					j=i;
				}
			}
		}
	}
	printf("%d",k);
	return 0;
}
