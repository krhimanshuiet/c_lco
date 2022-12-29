#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char upp[20],low[20];
	int i,l,e;
	printf("Enter the lower case letter to convert into lower case:");
	gets(low);
	l = strlen(low);
	e=l-1;
	for(i=0;i<l;i++)
	{
	upp[i] = low[e];
	e--;
	}
	puts(upp);
	return 0;
}
