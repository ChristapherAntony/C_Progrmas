/*
 ============================================================================
 Name        : Pattern_alphabets.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void printChar();
int i,j,k,n;

int main(void) {
	setbuf(stdout,NULL);
	printChar();


	return EXIT_SUCCESS;
}

void printChar(){

	char array[5]={'I','N','D','I','A'};

	for(i=1; i<=5; i++){
		for(j=1; j<=i; j++){
		 printf("%c",array[j-1]);

		}
		printf("\n");
	}




}
