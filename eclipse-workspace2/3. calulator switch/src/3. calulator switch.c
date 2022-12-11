/*
 ============================================================================
 Name        : .c
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

	char op;
	float result,num1,num2;
	printf("SIMPLE CALCULATOR\n");
	printf("..................\n");

	printf("Enter number1 [+ - * /] number2 \n");
	scanf("%f%c%f",&num1,&op,&num2);

	switch (op){
	case '+':
		result=num1+num2;
		break;
	case '-':
		result=num1-num2;
		break;
	case '*':
		result=num1*num2;
		break;
	case '/':
		result=num1/num2;
		break;
	}

	printf("result = %.2f",result);
	return EXIT_SUCCESS;
}
