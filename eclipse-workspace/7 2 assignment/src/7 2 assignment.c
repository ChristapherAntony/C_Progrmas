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
	int num1;
	float num2,sum;

	setbuf(stdout,NULL);

    printf("enter two numbers");
	scanf("%d%f",&num1,&num2);

    sum=num1+num2;

	printf("total:%f",sum);


	return EXIT_SUCCESS;
}
