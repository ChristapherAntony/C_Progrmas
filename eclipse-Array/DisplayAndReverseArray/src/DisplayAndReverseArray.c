/*
 ============================================================================
 Name        : DisplayAndReverseArray.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int size, i, array[100];
	setbuf(stdout,NULL);
	printf("Enter the size of an array\n");
	scanf("%d", & size);

	printf("Enter the values of an array\n");
	//for scanning an array we loop

	for(i=0; i<size; i++)
		scanf("%d",& array[i]);

	printf("\nDisplay in actual order\n");
	for(i=0; i<size; i++){
		printf("Array element in index %d :%d",i, array[i]);
		printf("\n");}

	printf("\nDisplay in reverse order\n");
	for(i=size-1 ; i>=0; i--)
		printf("%d", array[i]);
	printf("\n ");

	return EXIT_SUCCESS;
}
