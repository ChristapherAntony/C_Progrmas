/*
 ============================================================================
 Name        : functions.c
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

	sum();

	sum();

	sum();

	sum();


	return (0);
}

int sum(){


	int limit=5,i,j;

	for(i=1;i<=limit;i++){    //normal pattern
		for(j=1;j<=i;j++){
			printf("* ");
		}
		printf("\n");
	}

	for(i=limit-1;i>0;i--){   // reversal
		for(j=1;j<=i;j++){
			printf("* ");
		}
		printf("\n");
	}



}


