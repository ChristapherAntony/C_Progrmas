	/*
 ============================================================================
 Name        : Patr.c
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
	int i,j,a[3][3];

	printf("Enter values\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("you have entered:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d  ",a[i][j]);
		}
		printf("\n");
	}




	return EXIT_SUCCESS;
}
