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
void sum();
int main(void) {
	setbuf(stdout,NULL);

	printf("FUNCTION 1 TYPE");


	sum();


	return (0);
}

void sum(){
	int num1,num2;
	printf("enter two numbers");
	scanf("%d%d",&num1,&num2);
	printf("%d+%d=%d",num1,num2,(num1+num2));



}
