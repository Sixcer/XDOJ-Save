#include<stdio.h>
int main(void)
{
	int i,j,k=1;
	int num[190];
	num[0]=2;
	for(i=3;i<1000;i+=2)
	{
		for(j=3;j*j<i;j+=2)
		{
			if(i%j==0)
			break;
		}
		if(j*j>i)
		{
			num[k]=i;
			k++;
		}
	}
	scanf("%d",&k);
	while(k!=1)
	{
		for(i=0;k%num[i]!=0;i++);
		printf("%d",num[i]);
		k/=num[i];
		if(k!=1)
		printf("*");
	}
	return 0;
}
