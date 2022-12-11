/*
 ============================================================================
 Name        : 1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int simpleinterest();
int main(void) {
	setbuf(stdout,NULL);
	int p,r,n;
	printf("SIMPLE INTEREST CALCULATOR\n\n");
	printf("enter principal amount, interest rate, number of years..\n");
	scanf("%d%d%d",&p,&r,&n);

	printf("your interest rate for %dth number of years is %d",n,simpleinterest(p,r,n));

	return EXIT_SUCCESS;
}

int simpleinterest(p,r,n){
	int si;
	si=(p*r*n)/100;
	return si;
}
