#include<stdio.h>
int main()
{
	int i,j;
	char limit,value='a';
	printf("Enter the character up to which you want to print Character Pyramid (In lowercase):");
	scanf("%c",&limit);
	for(i=1;i<=(limit-'a')+1; i++)
	{
		for(j=1 ;j<=i; j++)
		{
			printf("%c",value);

		}
		value++;
		printf("\n");
	}
	return 0 ;
} 

