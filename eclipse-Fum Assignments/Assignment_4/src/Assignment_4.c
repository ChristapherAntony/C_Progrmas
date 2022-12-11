/*
 ============================================================================
 Name        : Assignment.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : program to check whether a student has passed or failed in a subject after
 	 	 	   he or she enters their mark (pass mark for a subject is 50 out of 100).

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);

	float mark;

	printf("Enter mark out of 100. ");
	scanf("%f",& mark);
	// mark received from the user

	if(mark >= 50 && mark <= 100){
		printf("Passed");
	}else if(mark < 50 && mark >= 0){
		printf("Failed");
	}else{
		printf("Invalid mark.");
	}



	return EXIT_SUCCESS;
}
