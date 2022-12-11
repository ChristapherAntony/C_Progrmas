/*
 ============================================================================
 Name        : Part.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	setbuf(stdout,NULL);
	int num1,num2;
	char operator;
	printf("SIMPLE CALCULATOR");
	printf("Enter number one");
	scanf("%d",&num1);
	printf("Enter number two");
	scanf("%d",&num2);
	printf("Select your operators +,-,*,/ :");
	scanf(" %c",&operator);

	if(operator=='+'){
		printf("%d+%d=%d",num1,num2,num1+num2);
	}else if(operator=='-'){
		printf("%d-%d=%d",num1,num2,num1-num2);
	}




	return EXIT_SUCCESS;
}
