#include<stdio.h>
int main()
{
	int number,once,tenth,hundred,army;
	printf("Enter a three digit Number:");
	scanf("%d",&number);
	hundred = number/100;
	tenth = (number%100)/10;
	once = number%10;
	army = once*once*once+tenth*tenth*tenth+hundred*hundred*hundred;
	if(number==army)
	{
		printf("Yes This Number is Armstrong Number");
	
	}
	else
	{
		printf("This no is not armstrong");
		 
	}
	return 0;
}
