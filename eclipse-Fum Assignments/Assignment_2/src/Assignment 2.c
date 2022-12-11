/*
 ============================================================================
 Name        : Assignment.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Accept two inputs from the user and output its sum.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);

	int number1;
	float number2, sum;

	printf("To calculate sum of two numbers.\n");

	printf("\nEnter first number (integer number only).");
	scanf("%d",&number1);
	//first number received from user

	printf("Enter second number (integer or fractional).");
	scanf("%f",&number2);
	//Second number received from the user.

	sum=number1+number2;
	// calculated the sum

	printf("\nSum of two numbers = %.2f",sum);
	// out put

	return EXIT_SUCCESS;
}
