/*
 ============================================================================
 Name        : 13.c
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
	int choice;
	puts("Please select your order \n 1 for Porotta \n 2 for Biriyani \n 3 for Mandhi \nplease choose");

	scanf("%d",&choice);
	switch(choice){
	case 1:
		printf("you have selected Porotta");
		break;
	case 2:
		printf("you have selected Biriyani");
		break;
	case 3:
		printf("you have selected Mandhi");
		break;
	default:
		printf("fool");
                        }



	return EXIT_SUCCESS;
}

