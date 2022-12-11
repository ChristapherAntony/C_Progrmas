/*
 ============================================================================
 Name        : if.c
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
	int num1,num2,max,nothing;
	printf("Enter two numbers\n");
	scanf("%d%d",&num1,&num2);



	if(num1>num2){
		printf("num1 is grater than num2");

	}else if(num1==num2){
		printf("num1 is equal to num2 ");
	}else if(num1<num2){
		printf("num2 is grater than num2");
	}
	printf("\n\n\n");


	// by using max variable

	if(num1>num2){
		max=num1;

	}else if(num1==num2){
		max=nothing;
	}else if(num1<num2){
		max=num2;
	}

	printf("%d is the maximum number ",max);

	return EXIT_SUCCESS;
}
