/*
 ============================================================================
 Name        : maximum.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : maximum between two numbers using switch function
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);
	int num1,num2;

	printf("enter 2 numbers\n");
	scanf("%d%d",&num1,&num2);

	switch (num1>num2){

	case 1:
		printf("%d is grater number",num1);
		break;
	default:printf("%d is grater number",num2);

	}

	return EXIT_SUCCESS;
}
