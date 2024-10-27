#include<stdio.h>
int main(void)
{
	int sushu[170];
	int i,j,k=1;
	sushu[k]=2;
	k++;
	sushu[k]=3;
	k++;
	for(i=5;i<1000;i+=2)
	{
		for(j=1;sushu[j]*sushu[j]<i;j++)
		{
			if(i%sushu[j]==0)
			break;
		}
		if(sushu[j]*sushu[j]>i)
		{
			sushu[k]=i;
			k++;
		}
	}
	scanf("%d",&i);
	for(j=1;j<=167;j++)
	{
		for(k=168;k>=2;k--)
		{
			if(sushu[j]+sushu[k]==i)
			{
				if(sushu[j]<=sushu[k])
				{
					printf("%d %d",sushu[j],sushu[k]);
					return 0;
				}
				else
				{
					printf("%d %d",sushu[k],sushu[j]);
					return 0;
				}
			}
		}
	}
	return 0;
 } 
