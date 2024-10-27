#include<stdio.h>
int main(void)
{
	int n;
	scanf("%d",&n);
	int qq[n],i,j,k,q=0,qqsum=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&qq[i]);
	}
	for(i=0;i<n;i++)
	{
		k=0;
		j=qq[i];
		while(j>0)
		{
			k+=j%10;
			j/=10;
		}
		if(k>qqsum)
		{
			qqsum=k;
			q=qq[i];
		}
		if(k==qqsum&&qq[i]>q)
		{
			q=qq[i];
		}
	}
	printf("%d",q);
	return 0;
}
