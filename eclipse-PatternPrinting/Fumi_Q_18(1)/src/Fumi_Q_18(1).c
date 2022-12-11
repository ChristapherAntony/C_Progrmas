/*
 ============================================================================
 Name        : Fumi_Q_18(1).c
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

	for(i=1; i<=20; i++){
		for(j=1; j<=20; j++){
			if( j==1 || i<=2&&j<=3 || i>=4&i<=5&&j<=6 || i>=8&&i<=9 ){
				printf("*  ");
			}
		}printf("\n\n");


		}
	return EXIT_SUCCESS;
}
