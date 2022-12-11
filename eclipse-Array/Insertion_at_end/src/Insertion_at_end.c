/*
 ============================================================================
 Name        : Insertion_at_end.c
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

	int i, n=5, array[100]={20,30,40,50,60}, newValue;

	printf("Enter the new value add  in the end of an array \n");
	scanf("%d", & newValue);
	// new value  input

	n++;  // adding one more index position
	array[n-1]=newValue;  // assigning new value to the end index position

	printf("New array after inserting value\n");
	for (i = 0; i < n; ++i) {
		printf(" %d |",  array[i]);
	}


	return EXIT_SUCCESS;
}
