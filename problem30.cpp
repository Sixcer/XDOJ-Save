#include<stdio.h>
int main(void)
{
	int a,b;
	scanf("%d%d",&a,&b);
	int i,j,sum;
	for(i=a;i<=b;i++)
	{
		sum=0; 
		for(j=1;j<i;j++)
		{
			if(i%j==0)
			{
				sum+=j;
			}
		}
		if(sum==i)
			printf("%d\n",i);
	}
	return 0;
	
}
