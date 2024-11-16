#include<stdio.h>
void pri(int);
int main(void)
{
	int n;
	scanf("%d",&n);
	int i;
	for(i=0;n!=0;n/=10)
	{
		i+=n%10;
	}
	if(i<=2)
	{
		printf("sum <=2.");
		return 0;
	}
	else
	pri(i);
	return 0;
}
void pri(int x)
{
	int sushu[]={2,3,5,7,11,13,17,19,23,29,31,37};
	int i;
	for(i=11;x%sushu[i]!=0;i--);
	printf("%d",sushu[i]);
	return;
}
