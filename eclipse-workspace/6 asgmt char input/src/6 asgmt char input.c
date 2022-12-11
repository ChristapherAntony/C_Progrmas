/*
 ============================================================================
 Name        : 6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char name[25];
	setbuf(stdout,NULL);
	printf("enter your name");
	scanf("%s",&name);
	printf("your name is:%s",name);
	return EXIT_SUCCESS;
}
