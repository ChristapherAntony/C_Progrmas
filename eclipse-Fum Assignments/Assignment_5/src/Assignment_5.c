/*
 ============================================================================
 Name        : Assignment.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : program to show the grade obtained by a student after they enter their total mark percentage.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);
	float totalMark;

	printf("Enter total mark out of 100. ");
	scanf("%f", & totalMark);
	// mark received from user.

	if(totalMark >= 90 && totalMark <= 100){
		printf("Your grade = A");
	}
	else if(totalMark >= 80 && totalMark < 90){
		printf("Your grade = B");
	}
	else if(totalMark >= 70 && totalMark < 80){
		printf("Your grade = C");
	}
	else if(totalMark >= 60 && totalMark < 70){
		printf("Your grade = D");
	}
	else if(totalMark >= 50 && totalMark < 60){
		printf("Your grade = E");
	}
	else if(totalMark < 50 && totalMark >= 0){
		printf("Failed.");
	}
	else{
		printf("Invalid mark");
	}















	return EXIT_SUCCESS;
}
