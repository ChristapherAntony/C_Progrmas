/*
 ============================================================================
 Name        : Part3.c
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
	int num1,num2,choice,result;
	printf("enter 3 numbers");
	scanf("%d%d",&num1,&num2);

	printf(" 1 for addition \n 2 for subtraction \n please select one ");
	scanf("%f",&choice);

	switch(choice){
		case 1:
			result=num1+num2;
			printf("%d",result);
			break;
		case 2:
			result=num1-num2;
			printf("%d",result);
			break;
		default:
			printf("error");

		}


	return EXIT_SUCCESS;
}
