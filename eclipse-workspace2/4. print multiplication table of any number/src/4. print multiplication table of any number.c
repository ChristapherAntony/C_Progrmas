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
	int limit,multiplier,i;

	printf("MULTIPLICATION TABLE\n");
	printf("*********************\n\n\n");

	printf("Enter limit=");
	scanf("%d",&limit);
	printf("Enter multiplier=");
	scanf("%d",&multiplier);

	for(i=1;i<=limit;i++){
		printf("%d  * %d  =%d",i,multiplier,(i*multiplier));
		printf("\n");

	}
	printf

	return EXIT_SUCCESS;
}
