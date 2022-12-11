/*
 ============================================================================
 Name        : Assignment.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Simple interest calculation.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);

	int principalAmount;
	float interestRate, numberOfYears, simpleInterest;

	printf("Enter the Principal amount.");
	scanf("%d",& principalAmount);

	printf("Enter Interest rate.");
	scanf("%f",& interestRate);

	printf("Enter Number of years.");
	scanf("%f",& numberOfYears);
	// all inputs received from user for interest calculation.

	simpleInterest = (principalAmount * interestRate * numberOfYears)/100;
	//simple interest calculation

	printf("\nYour simple interest for %.1f years = %.2f ", numberOfYears, simpleInterest);
	// out put to user.



	return EXIT_SUCCESS;
}
