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
	int num,sum=0,i;
	printf("enter a number");
	scanf("%d",&num);
	for(i=1;i<=num;i++){sum=sum+i;}

	printf("total value==%d",sum);

	return EXIT_SUCCESS;
}
