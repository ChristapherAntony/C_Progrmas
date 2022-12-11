/*
 ============================================================================
 Name        : Assignment.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : program to accept an input number from the user and output the day.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);
	int day;

	printf("Enter day ");
	scanf("%d", &day);
	// day number input from user.

	switch (day) {
		case 1:
			printf("Sunday");
			break;
		case 2:
			printf("Monday");
			break;
		case 3:
			printf("Tuesday");
			break;
		case 4:
			printf("Wednesday");
			break;
		case 5:
			printf("Thursday");
			break;
		case 6:
			printf("Friday");
			break;
		case 7:
			printf("\nSaturday");
			break;

		default:
			printf("\nInvalid Entry");
			break;
	}

	return EXIT_SUCCESS;
}
