#include<stdio.h>
#include<string.h>
int main(void)
{
	char a[100]={0};
	scanf("%s",a);
	int s=strlen(a);
	int i,j,k;
	for(i=0;i<s-1;++i)
	{
		for(j=0;j<s-i-1;++j)
		{
			if(a[j]>a[j+1])
			{
				k=a[j];
				a[j]=a[j+1];
				a[j+1]=k;
			}
		}
	}
	printf("%s",a);
	return 0;
}
