#include<stdio.h>
int main(void)
{
	int n,i,j,k,l=998;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i!=j)
			{
			if(a[i]>=a[j])
			{
				k=a[i]-a[j];
			}
			else k=a[j]-a[i];
			if(k<l)
			{
				l=k;
			}
			}
		}
	}
	printf("%d",l);
	return 0;
}
