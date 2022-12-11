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

	int i,values1[50],values2[50],tempvalues,limit;

	printf("Enter array limit");
	scanf("%d",&limit);

	printf("Enter values of array 1\n");
	for(i=0;i<limit;i++){
		scanf("%d",&values1[i]);

	}
	printf("Enter values of array 2");
	for(i=0;i<limit;i++){
			scanf("%d",&values2[i]);
	}

	for(i=0;i<limit;i++){

	tempvalues=values1[i];
	values1[i]=values2[i];
	values2[i]=tempvalues;}

	printf("Values of array 1 are now--");
	for(i=0;i<limit;i++){
		printf("%d ",values1[i]);
	}
	printf("\nValues of array 2 are now--");
	for(i=0;i<limit;i++){
		printf("%d ",values2[i]);
	}






	return EXIT_SUCCESS;
}
