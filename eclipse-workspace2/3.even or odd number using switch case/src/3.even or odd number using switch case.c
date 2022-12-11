/*
 ============================================================================
 Name        : even.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : even or odd number using switch case
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);
	int num;

	printf("Enter a number to check odd or even, ");
	scanf("%d",&num);

	switch(num%2){
	case 0:
		printf("even number");
		break;
	case 1:
		printf("odd");
		break;

	}

	return EXIT_SUCCESS;
}
