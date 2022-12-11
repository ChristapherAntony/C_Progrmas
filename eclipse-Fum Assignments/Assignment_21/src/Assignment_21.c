/*
 ============================================================================
 Name        : Assignment_21.c
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

	int limit, i, j, k;
	printf("Enter the array limit");
	scanf("%d",&limit);
	int array[100];
	//int newArray[100];
	int adjacent[100];

	printf("Enter the values of array \n");
	for(i=0; i<limit; i++){
		scanf("%d",& array[i]);
	}




	for(i=0; i<limit-1; i++){

		adjacent[i]=array[i]*array[i+1];


	}
	for(i=0; i<limit-1; i++){
		printf("%d ",adjacent[i]);
	}

	return EXIT_SUCCESS;
}
