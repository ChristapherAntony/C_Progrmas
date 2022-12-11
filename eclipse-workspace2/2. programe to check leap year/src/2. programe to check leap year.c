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
	int year;
	printf("enter year");
	scanf("%d",&year);
	if(((year%4==0)&&(year%100!=0))||(year%400==0)){
		printf("Its a leap year");
	}else {
		printf("Its not leap year");
	}
	return EXIT_SUCCESS;
}
