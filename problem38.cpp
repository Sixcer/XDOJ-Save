#include<stdio.h>
int main(void)
{
	int i,j,k=0,num[100000];
	scanf("%d",&j);
	if(j>=0&&j<10)
	{
		printf("%d",j);
		return 0;
	}
	for(i=0;i<100;i++)
	{
		num[i]=j%10;
		k+=j%10;
		j/=10;
		if(j==0)
		break;
	}
	while(j<=i)
	{
		if(num[i]==num[j])
		{
			i--;
			j++;
		}
		if(num[i]!=num[j])
		{
			printf("no");
			return 0;
		}
	}
	printf("%d",k);
	return 0;
}
