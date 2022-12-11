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

void product(); // declaration of function, and void because of no return value
int main(void) {
	setbuf(stdout,NULL);
	int num1,num2;
	printf("Function with a argument without return value\n\n\n");

	printf("Enter two numbers  ");
	scanf("%d%d",&num1,&num2);
	product(num1,num2);/* calling function to work its external function
	                     in the (actual parameters) are the argument passing
	                     to external function*/

	return EXIT_SUCCESS;
}

void product(num1,num2){  /* in the ( are formal parameters) received from main function */
	int result;
	result=num1*num2;

	printf("product of the two numbers are %d",result);

}
