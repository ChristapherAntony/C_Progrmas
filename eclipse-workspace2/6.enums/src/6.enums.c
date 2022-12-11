/*
 ============================================================================
 Name        : enums.c
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

	enum Company { GOOGLE, FACEBOOK, XEROX, YAHOO , EBAY, MICROSOFT } ;

	enum Company meta=FACEBOOK;


	printf("%d\n",meta);


	int sample=100;


	printf("%d",sample);


































	return EXIT_SUCCESS;
}
