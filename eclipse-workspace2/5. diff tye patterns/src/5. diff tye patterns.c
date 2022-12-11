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
	int row,colm,i,j;
	printf("hollow square or rectangle star pattern\n);");
	printf("''''''''''''''''''''''''''''''''''''''''\n\n");

	printf("enter rows and columns ");
	scanf("%d%d",&row,&colm);
	printf("\n");

	for(i=1;i<=row;i++){
		for(j=1;j<=colm;j++){
			if(i==1||i==row||j==1||j==colm||i==j||j==(colm-i+1)){
				printf("* ");
			}else{printf("  ");
		}
	}printf("\n");
	}





	return EXIT_SUCCESS;
}
