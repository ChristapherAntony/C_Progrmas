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
		for(j=1; j<=1; j++){
			printf("*  ");
		}
		for(j=2; j<=3; j++){
			if(i==1){
				printf("*  ");
			}
		}
		for(j=2; j<=6; j++){
			if(i==5 || i==6){
				printf("*  ");
			}
		}
		for(j=2; j<=9; j++){
			if(i>=10){
				printf("*  ");
			}
		}





		printf("\n\n");
	}

	return EXIT_SUCCESS;
}
