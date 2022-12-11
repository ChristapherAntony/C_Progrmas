/*
 ============================================================================
 Name        : 5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a=100,b=200,temp;
	setbuf(stdout,NULL);
	temp=a;
	a=b;
	b=temp;

    printf("a:%d",a);
    printf("b:%d",b);


	return EXIT_SUCCESS;
}
