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
	int i,j,limit;

	printf("print patters \n");
	printf("''''''''''''''\n\n");;
	printf("Enter a limit = ");
	scanf("%d",&limit);
	printf("\n");


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
	printf("\n\n");

	for(i=1;i<=limit;i++){    //normal pattern with numbers
		for(j=1;j<=i;j++){
			printf("%d ",i);
		}
		printf("\n");
	}

	return EXIT_SUCCESS;
}
