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
	// for printing the 1 to 10 using while increment
	int num=1;           //initializing the variable

	while(num<=10)       //while loop with condition

	{printf("%d\n",num); // body to be printed
		num++;           // //incrementing operation (updation)
	}
	return EXIT_SUCCESS;
}
