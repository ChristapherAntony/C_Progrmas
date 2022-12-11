/*
 ============================================================================
 Name        : Assignment_20.c
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

	int  i, j;
	int count=1;

	for(i=0; i<=4; i++){

		for(j=1;j<=i;j++){

			printf("%d  ",count++);

		}

		printf("\n\n");

	}

	return EXIT_SUCCESS;
}
