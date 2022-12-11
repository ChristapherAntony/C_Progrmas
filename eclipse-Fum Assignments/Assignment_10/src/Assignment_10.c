/*
 ============================================================================
 Name        : Assignment_10.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : program to interchange the values of two arrays.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);
	int sizeOfArray, i;
	int array1[sizeOfArray];
	int array2[sizeOfArray];

	printf("Enter the size of the array  \n");
	scanf("%d",& sizeOfArray);
	// array size scanned from used

	printf("\nEnter the values of the array 1 \n");
	for(i=0; i<sizeOfArray; i++){
		scanf("%d",& array1[i]);
	} //array 1 scanned

	printf("\nEnter the values of the array 2 \n");
	for(i=0; i<sizeOfArray; i++){
		scanf("%d",& array2[i]);
	} //array2 scanned


	//swapping of two array
	int temp=0;
	for(i=0; i<sizeOfArray; i++){

		temp=array1[i];
		array1[i]=array2[i];
		array2[i]=temp;

	} // array swapped by using a temp variable.

	printf("\nArrays after swapping: \n");

	printf("Array1:");
	for(i=0; i<sizeOfArray; i++){
		printf("%d  ", array1[i]);
	}
	printf("\nArray2:");
	for(i=0; i<sizeOfArray; i++){
			printf("%d  ", array2[i]);
		}

	return EXIT_SUCCESS;
}
