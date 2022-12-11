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
	// to check divisibility of a number by 5 and 11
	setbuf (stdout,NULL);
	int num=55;

	if((num%5==0)&&(num%11==0)){
		printf("number %d is divisible by 5 and 11 ",num);

	}else {printf("number %d is not divisible by 5 and 11 ",num);}
	return EXIT_SUCCESS;
}
