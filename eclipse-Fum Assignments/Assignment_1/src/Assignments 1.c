/*
 ============================================================================
 Name        : Assignments.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Accept a char input from the user and display it on the console.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	setbuf(stdout,NULL);
	char firstCharacter;

	printf("Enter first character of your name.\n");
	scanf("%c",&firstCharacter);
	//input form user

	printf("\nYour names first character is %c",firstCharacter);
	//out put displaying to user

	return EXIT_SUCCESS;
}
