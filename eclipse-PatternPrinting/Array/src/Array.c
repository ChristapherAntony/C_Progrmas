/*
 ============================================================================
 Name        : Array.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void ReverseDispaly(); void sumAndAverage();
int size , array[100], i;
int main(void) {
	setbuf(stdout,NULL);

//	ReverseDispaly();

	sumAndAverage();





	return EXIT_SUCCESS;
}

void ReverseDispaly(){
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


}

void sumAndAverage(){

	int sum=0;
	float average;
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


}
