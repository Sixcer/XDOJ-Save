#include<stdio.h>
int f(char n){if(n>='A'&&n<='z')return n>'Z'?n:n+'a'-'A';else return n;}
int main(void)
{
	int n,m;
	scanf("%d %d",&n,&m);
	char test[n];
	scanf("%s",test);
	for(int i=0;i<n-1;++i)
	{
		for(int j=0;j<n-i-1;++j)
		{
			if(f(test[j])>f(test[j+1]))
			{
				int delta=test[j];
				test[j]=test[j+1];
				test[j+1]=delta;
			}
		}
	}
	int delta=test[0];
	for(int i=0;i<m;++i)
	{
		test[i]=test[i+1];
	}
	test[m]=delta;
	printf("%s",test);
	return 0;
}
