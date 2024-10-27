#include<stdio.h>
int main(void)
{
	int n;
	scanf("%d",&n);
	int i,j,k=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&j);
		k+=j;
	}
	float a=k;
	printf("%.2f",a/n);
	return 0;
}
