#include<stdio.h>
int main(int argc, const char * argv[])
{
	printf("Program Name: %s\n",argv[0]);
	
	switch(argc)
	{
		case 1:
		printf("One argument is expected");
		break;
		case 2:
		printf("1 Arguments are supplied:%s\n",argv[1]);
		break;
		case 3:
		printf("2 Arguments are supplied:%s\n",argv[2]);
		break;
		case 4:
		printf("3 Arguments are supplied:%s\n",argv[3]);
		break;
		case 5:
		printf("4 Arguments are supplied:%s\n",argv[4]);
		break;
		case 6:
		printf("5 Arguments are supplied:%s\n",argv[5]);
		break;
		case 7:
		printf("6 Arguments are supplied:%s\n",argv[6]);
		break;
		case 8:
		printf("7  Arguments are supplied:%s\n",argv[7]);
		break;
		case 9:
		printf("8 Arguments are supplied:%s\n",argv[8]);
		break;
		case 10:
		printf("8 Arguments are supplied:%s\n",argv[9]);
		break;
		case 11:
		printf("10 Arguments are supplied:%S\n",argv[10]);
		break;
		default:
		printf("You can not pass more than 11 arguments!!!");
	}


	
	return 0;
	
	
	
	
}
