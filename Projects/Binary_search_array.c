#include<stdio.h>
#include<stdlib.h>

int main()
{
	int array[20];
	int occurance = 0 ;
	int i,length,find;
	printf("Enter the no of Elements do you want to enter: ");
	scanf("%d",&length);
	
	printf("Enter th elements below: \n");
	for(i=0;i<length;i++)
	{
		scanf("%d",&array[i]);
	}
	printf("Enter the number which you want to search:");
	scanf("%d",&find);
	
	for(i=0;i<length;i++)
	{
		if(array[i]== find)
		{
			printf("Your number %d is at %d place\n",find,i+1);
			break;
//			occurance++;
		}
	}
//	if(occurance == 0)
//	{
//		printf("Number not found\n");
//	}
//	else
//	{
//		printf("Total no of occurance is: %d\n",occurance);
//	}
	return 0;
}
