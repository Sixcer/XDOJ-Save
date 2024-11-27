//感觉题目有问题，坐标从0到100就不可能格子总数为10000.下面的代码将错就错. 
#include<stdio.h>

void paint(int, int (*)[4], int *);

int main()
{
	int n,l[100][4];
	int result[300];
	int i;

	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		scanf("%d%d%d%d",&l[i][0],&l[i][1],&l[i][2],&l[i][3]);
	}

	paint(n,l,result);
	for(i=0;i<=result[0];i++)
	{
		printf("%d %d\n",result[i*2],result[i*2+1]);
	}

	return 0;
}

void paint(int n,int (*l)[4],int *result)
{
	int t[100][100]={0};
	int i,j,k;
	for(i=0;i<n;++i)
	{
		for(j=l[i][0];j<l[i][2];++j)
		{
			for(k=l[i][1];k<l[i][3];++k)
			{
				t[j][k]++;
			}
		}
	}
	result[0]=0;
	int x,s=0;
	for(i=n;i>=0;--i)
	{
		x=0;
		for(j=0;j<100;++j)
		{
			for(k=0;k<100;++k)
			{
				if(t[j][k]==i)
				{
					x++;
				}
			}
		}
		if(x||result[0])
		{
			result[s]=i;
			++s;
			result[s]=x;
			++s;
		}
	}
	return;
}
