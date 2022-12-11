/*
 ============================================================================
 Name        : day.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description :print day of week name using switch case
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);
	int day;
	printf("Enter a day (1-7), ");
	scanf("%d",&day);

	switch (day){
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
	default:printf("not valid");
	}

	return EXIT_SUCCESS;
}
