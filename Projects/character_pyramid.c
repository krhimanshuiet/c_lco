#include<stdio.h>
int main()
{
	int i,j,limit;
	printf("Enter the no  up to which you want to print char Pyramid:");
	scanf("%d",&limit);
	for(i=limit;i>=1; i--)
	{
		for(j=1 ;j<=i; j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	return 0 ;
} 
