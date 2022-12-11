/*
 ============================================================================
 Name        : insertion_at.c
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

	printf("Enter the new value add  in the existing array beginning\n");
	scanf("%d", & newValue);
	// new value  input

	n++; // add a new index position in existing size

	for(i=n-1; i>=0; i--)
		array[i]=array[i-1];
		// shfting all elements one position right to add new element
		// at beginning
	array[0]=newValue;
		// assigning new value to first position.

	printf("New array after inserting value\n");
	for (i = 0; i < n; ++i) {
		printf(" %d |",  array[i]);
	}

	return EXIT_SUCCESS;
}
