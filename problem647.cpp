#include<stdio.h>
#include<string.h>
int fun(int s){return s>='a'?s:s-'A'+'a';}
int main(void)
{
	char s[50];
	scanf("%s",s);
	int i,j,k;
	k=strlen(s);
	for(i=0;i<k;++i)
	{
		if(fun(s[i])!=fun(s[k-i-1]))
		{
			break;
		}
	}
	if(i==k)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
