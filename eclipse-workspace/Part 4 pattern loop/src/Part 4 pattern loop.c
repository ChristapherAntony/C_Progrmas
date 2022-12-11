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
	int n,i,j;
	printf("enter a number");
	scanf("%d",&n);

	for(i=1;i<=n;i++){
		for(j=0;j<i;j++){
			printf("@ ");
		}
		printf("\n");
	}



	return EXIT_SUCCESS;
}
