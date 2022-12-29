//
//  main.c
//  hello
//
//  Created by igneus on 21/07/15.
//  Copyright © 2015 igneus. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
	int value1, value2,value3,big=0;
	printf("Enter the value1: ");
	scanf("%d", &value1);
	printf("Enter the value2: ");
	scanf("%d", &value2);
	printf("Enter the value3: ");
	scanf("%d", &value3);
	

    if((value1>=value2)&&(value1>=value3))
	{
		printf("The Biggest No is: %d",value1);
	}
	else if((value2>=value1)&&(value2>=value3))
	{
		printf("The Biggest No is: %d",value2);
	}
	else if((value3>=value1)&&(value3>=value2))
	{
		printf("The Biggest No is: %d",value3);
	}
	else
	{
		printf("INVALID");
	}

    return 0;
    
}
