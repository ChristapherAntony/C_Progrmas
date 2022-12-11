/*
 ============================================================================
 Name        : sample.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int sum();

int main(void) {
	setbuf(stdout,NULL);
	int a,b;

	printf("enter two numbers");
	scanf("%d%d", &a,&b);

	int result=sum(a,b);

	printf("result is %d",result);





	return EXIT_SUCCESS;
}


// function deceleration
int sum(int num1,int num2){
	int sum=num1+num2;



return (sum);
}
