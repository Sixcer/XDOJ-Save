#include<stdio.h>
int main(void)
{
	int n=0,i=1,k=0;
	while(i!=0)
	{
		scanf("%d",&i);
		if(i==0)
		{
			printf("%d",n);
			return 0;
		}
		if(i==1)
		{
			n+=1;
			k=0;
		}
		if(i==2)
		{
			n+=2+k*2;
			k++;
		}
	}
}
