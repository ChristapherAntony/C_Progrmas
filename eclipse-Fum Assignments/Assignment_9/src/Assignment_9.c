/*
 ============================================================================
 Name        : Assignment_9.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : print pattern number up to 5.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);
	int limit=5,i,j;

	for(i=1; i <=limit ; i++){
		for(j=1; j<=i ; j++){
			 printf("%d ",j);
		}
		printf("\n\n");
	}




	return EXIT_SUCCESS;
}
