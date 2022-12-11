/*
 ============================================================================
 Name        : Duplication.c
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
	// find duplication

	int i, j, size=10, a[100]={1,5,10,1,4,3,10,4,7,6};

	for(i=0; i<size; i++){
		for(j=i+1; j<size; j++){
			if(a[i]==a[j] ){

			}
		}
	}

	return EXIT_SUCCESS;
}
