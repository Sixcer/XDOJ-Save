#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char *compress(char *src);
int main()
{
	char src[100];
	scanf("%s",src);

	char *ps = compress(src);
	
	puts(ps);
	return 0;
}

char *compress(char *src)
{
	int i,j=0,k=0;
	char *ps=(char *)malloc(100*sizeof(char));
	for(i=0;i<strlen(src);++i)
	{
		if(src[i]!=src[i+1])
		{
			++k;
			ps[j]=src[i];
			++j;
			if(k>2&&k<10)
			{
				ps[j]=k+48;
				++j;
			}
			else if(k>9)
			{
				ps[j+1]=k%10+48;
				k/=10;
				ps[j]=k%10+48;
				j+=2;
			}
			else if(k==2)
			{
				ps[j]=src[i];
				++j;
			}
			k=0;
		}
		if(src[i]==src[i+1])
		{
			++k;
		}
	}
	ps[j]='\0';
	return ps;
}
