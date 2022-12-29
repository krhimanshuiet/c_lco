#include<stdio.h>
#include<stdlib.h>
int main()
{
	int value1 = 5,value2=0,value3;
	if(value2==0)
	{
		fprintf(stderr,"Legendry Division By zero error! Exiting\n");
		exit(EXIT_FAILURE);
	}
	value3=value1/value2;
	fprintf(stderr,"Answer is:%d\n",value3);
	exit(EXIT_SUCCESS);
	
}
