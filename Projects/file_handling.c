#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	fp = fopen("C:/Users/Himanshu Singh/Desktop/C_LCO/Projects/test.txt","w+");
	fputs("Please put this text in my file\n",fp);
	fprintf(fp,"Himanshu kumar singh");
	fclose(fp);
	return 0;
	 

}
