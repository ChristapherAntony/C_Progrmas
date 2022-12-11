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
	char name[15];

	printf("Enter your name : ");
	scanf("%s",name);

	printf("\nYour name is %s",name);


	return EXIT_SUCCESS;
}
