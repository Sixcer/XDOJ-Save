#include<stdio.h>
#include<string.h>
int main(void)
{
	char text[100];
	gets(text);
	printf("%d",strlen(text));
}
