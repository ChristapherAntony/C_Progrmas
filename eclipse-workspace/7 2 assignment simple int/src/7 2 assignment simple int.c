/*
 ============================================================================
 Name        : 7.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int p;
	float r,n,si;
	setbuf(stdout,NULL);
	printf("ENTER PRICIPAL AMOUNT");
	scanf("%d",&p);

	printf("enter interst rate");
	scanf("%f",&r);

	printf("no of years");
	scanf("%f",&n);

	si=(p*r*n)/100

    return EXIT_SUCCESS;
}
