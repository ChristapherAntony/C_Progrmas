/*
 ============================================================================
 Name        : Part.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	//to print a table of number 2

	int num=1;               //initializing the variable

	do                       //do-while loop
	{printf("%d\n",num*2);   // body to be executed
	num++;}                  //incrementing operation
	while(num<=10);
	return EXIT_SUCCESS;
}
