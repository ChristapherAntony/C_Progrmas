/*
 ============================================================================
 Name        : Pattern_FType.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int i, j;

	for(i=1; i<=12; i++){
		for(j=1; j<=9; j++){
			if(j==1|| i==1&&j<=3|| i>4&i<7 &&j<=6 || i>9&i<13 &&j<=9){
				printf("*  ");
			}
		}printf("\n\n");
	}

	return EXIT_SUCCESS;
}
