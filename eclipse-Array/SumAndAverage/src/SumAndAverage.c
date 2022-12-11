/*
 ============================================================================
 Name        : SumAndAverage.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int sum=0, i, size, array[100];
	float average;
	setbuf(stdout,NULL);

	printf("Enter the size of an array\n");
	scanf("%d", & size);

	printf("Enter the values of an array\n");
	for(i=0; i<size; i++){
		scanf("%d",& array[i]);
	}

	//for scanning an array we loop
	for(i=0; i<size; i++){
		sum=sum+array[i];
	}
	average=sum/size;
	printf("Sum =%d\nAverage=%.2f", sum, average);

	// for find sum
	return EXIT_SUCCESS;
}
