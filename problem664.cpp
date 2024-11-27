#include<stdio.h>
#include<string.h>
int fun(int a){return a>='a'?a:a+'a'-'A';}
int main(void)
{
	char s1[100],s2[100];
	gets(s1);
	gets(s2);
	int len1=strlen(s1),len2=strlen(s2);
	int i,j,k=0,l=0;
	for(i=0;i<100;++i)
	{
		s1[i]=fun(s1[i]);
		s2[i]=fun(s2[i]);
	}
	for(i=0;i<len1;++i)
	{
		for(j=0;j<len2;++j)
		{
			if(s2[j]==s1[i])
			{
				for(k=0;s2[j+k]==s1[i+k];++k)
				{
					if(j+k==len2||i+k==len1)
					{
						break;
					}
				}
				if(k>l)
				{
					l=k;
				}
				j+=k;
				i+=k;
			}
		}
	}
	float a=2*l,b=len1+len2;
	printf("%.3f",a/b);
	return 0;
}
