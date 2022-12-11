/*
 ============================================================================
 Name        : .c
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
	puts("Program to check alphabets\n\n"); /* prints Program to check alphabets */
	char ch;
	printf("Enter an Alphabet-");
	scanf("%c",&ch);

	if(((ch>='a')&&(ch>='z'))||((ch>='A')&&(ch>='Z'))){
		printf("It's an Alphabet");
	}else{printf(" not an Alphabet");
	}
	return EXIT_SUCCESS;
}
