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

int main(void) {
	setbuf(stdout,NULL);
	float mark;
	printf("Enter your total mark");
	scanf("%f",&mark);
	if(mark>=90){printf("A Grade");}
	else if(mark>=80){printf("B Grade");}
	else if(mark>=70){printf("C Grade");}
	else if(mark>=60){printf("D Grade");}
	else if(mark>=50){printf("E Grade");}
	else if(mark<50){printf("Failed");}



	return EXIT_SUCCESS;
}
