/*
 ============================================================================
 Name        : 10.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num1,num2;
	setbuf(stdout,NULL);

	printf("Please Enter two number");
	scanf("%d%d",&num1,&num2);

	if(num1>num2){printf("grater number is %d",num1);}
	else         {printf("grater number is %d",num2);}

	return EXIT_SUCCESS;
}
