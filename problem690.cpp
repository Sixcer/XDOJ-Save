#include<stdio.h>
int main(void)
{
	int n,i,j=0,k=0,l=0,a=0;
	scanf("%d",&n);
	for(i=n;i<=n*n;i++)
	{
		if(i%2!=0)
		j++;
		if(i%2==0)
		k++;
		if(i%4==0&&i%3!=0)
		l++;
	}
	if(j+k<=j+l)
	a=j+l;
	else
	a=j+k;
	if(k+l>a)
	a=k+l;
	printf("%d %d %d\n%d",j,k,l,a);
	return 0;
}
