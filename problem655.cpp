#include<stdio.h>
int fun(char a)
{
	if(a>='a'&&a<='z'||a>='A'&&a<='Z')
		return a>'Z'?a:a+'a'-'A';
	else
		return a;
}
int main(void)
{
	int n,m;
	scanf("%d %d",&n,&m);
	char text[n+1];
	getchar();
	gets(text);
	int i,j,k;
	for(i=0;i<n-1;++i)
	{
		for(j=0;j<n-i-1;++j)
		{
			if(fun(text[j])>fun(text[j+1]))
			{
				k=text[j];
				text[j]=text[j+1];
				text[j+1]=k;
			}
		}
	}
	k=text[0];
	for(i=0;i<m;++i)
	{
		text[i]=text[i+1];
	}
	text[m]=k;
	puts(text);
}
