#include<stdio.h>
int main()
{
	int number,once,tenth,hundred,sum;
	printf("Enter a three digit Number:");
	scanf("%d",&number);
	hundred = number/100;
	tenth = (number%100)/10;
	once = number%10;
	printf("Once:%d\n",once);
	printf("Tenth:%d\n",tenth);
	printf("Hundred:%d\n",hundred);
	sum = once+tenth+hundred;
	printf("Sum of three numbers is: %d",sum);
	return 0;
}
