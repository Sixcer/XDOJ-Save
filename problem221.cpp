#include<stdio.h>
int main(void)
{
	char a[100]={0};
	scanf("%s",a);
	int j=0,k=0;
	for(int i=0;a[i]!=0;++i)
	{
		if(a[i]>='A'&&a[i]<='z')
		++j;
		if(a[i]>='0'&&a[i]<='9')
		++k;
	}
	printf("%d,%d",j,k);
	return 0;
}
