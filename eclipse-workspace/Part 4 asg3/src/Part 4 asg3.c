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
	int limit,i,j;
	printf("pattern loop with numbers\n");
	printf("enter your limit--");
	scanf("%d",&limit);

	for(i=1;i<=limit;i++){for(j=1;j<=i;j++){printf(" %d",j);}
	printf("\n");}



	return EXIT_SUCCESS;
}
