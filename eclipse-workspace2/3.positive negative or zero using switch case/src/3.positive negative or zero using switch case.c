/*
 ============================================================================
 Name        : positive.c
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
	int num;

	printf("Enter a number to  positive negative or zero using switch case");
	scanf("%d",&num);

	switch(num>0){
	case 1:
		printf("positive");
		break;
	case 0:
		switch(num<0){
		case 1:
			printf("negative");
			break;
		case 0:
			printf("zero");
			break;
		}
	break;

	}



	return EXIT_SUCCESS;
}
