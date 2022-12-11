/*
 ============================================================================
 Name        : F.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,limit=20;

	for(i=1; i<=limit; i++){
		for(j=1; j<=limit; j++){
			if(i==1||j==1||i==limit/2+1){
				printf("* ");
			}
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
