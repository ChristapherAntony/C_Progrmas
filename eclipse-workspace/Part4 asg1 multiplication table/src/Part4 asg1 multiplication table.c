/*
 ============================================================================
 Name        : Part4.c
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

    int num=1,limit=15,multi=3;

	do
	{printf("%d*%d= %d \n",num,multi,(num*multi));
	num++;}
	while(num<=limit);


	return EXIT_SUCCESS;
}
