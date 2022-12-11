/*
 ============================================================================
 Name        : incertion_at_spesific_point.c
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
	int i, n=5, array[100]={20,30,40,50,60}, pos, newValue;

	printf("Enter the new value add position in the existing array");
	scanf("%d %d", & newValue, &pos);
	// new value and the position input


	if(pos<=n && pos>=0){

		n++; //Insert one more index to array size
		for(i=(n-1); i>=pos-1; i--)
			array[i]=array[i-1];
			// shift elements forward from the pos. to be added
		array[pos-1]=newValue;
			// Inserted new value to the position

		printf("New array after inserting value\n");
		for (i = 0; i < n; ++i) {
			printf(" %d |",  array[i]);
		}

	}else{
		printf("Invalid position !!! (Exceed array limit)");
	}


	return EXIT_SUCCESS;
}
