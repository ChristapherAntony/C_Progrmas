/*
 ============================================================================
 Name        : pascalTriangle.c
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
	int i, j, n=4l, temp,sp=3;
	for(i=0; i<=n; i++){
		temp=1;
		for(j=0;j<=sp;j++){
			printf(" ");
		}
		for(j=0; j<=i; j++){
			printf(" %d",temp);
			temp=temp*(i-j)/(j+1);
		}
		printf("\n");
		sp--;



	}
	return EXIT_SUCCESS;
}
