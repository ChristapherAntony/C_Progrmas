/*
 ============================================================================
 Name        : Deletion_odd_even.c
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
	int i, j, size=10, array[100];

	int n=0, a[100];

	printf("Enter the values");
	for(i=0; i<size; i++){
		scanf("%d", & array[i]);
	}                        // values scanned
	for(i=0; i<size; i++){
		printf(" %d |",array[i]);
	}

	// next step is to sort in ascending order array even numbers
	for(i=0; i<size-1; i++){
		for(j=i+1 ; j<size; j++ ){
			if(array[i]>array[j]){
				array[i]=array[i]+array[j];
				array[j]=array[i]-array[j];
				array[i]=array[i]-array[j];
			}
		}
	}

	// finding even numbers from the array by using loop
	for(i=0; i<size; i++){
		if(array[i]%2  !=0){

			a[n]=array[i];
			for(j=i; j<size; j++){

				array[j]=array[j+1];
			}
		i--;
		size--;
		n++;
		}
	}
	printf("\nNew array of even numbers, \n");
	for(i=0; i<size; i++)
		printf(" %d |", array[i]);
	printf("\nNew array of even numbers, \n");
	for(i=0; i<n; i++)
		printf(" %d |", a[i]);




	// no we can merge odd and even numbers with out using a new array
//	int newSize=size+n;
//	int temp2=0;
//	for(i=size; i<newSize; i++){
//		array[i]=a[temp2];
//		temp2++;
//	}
//	printf("\nNew array of even and odd  numbers after merging, \n");
//	for(i=0; i<newSize; i++)
//		printf(" %d |", array[i]);


	// merging into a new array
	int mergedA[100], newSize=size+n, temp2=0;

	for(i=0; i<newSize; i++){
		mergedA[i]=array[i];
		if(i>=size){
			mergedA[i]=a[temp2];
			temp2++;
		}
	}
	printf("\nNew array (%d size) of even and odd  numbers after merging, \n", newSize);
	for(i=0; i<newSize; i++)
		printf(" %d |", mergedA[i]);

	printf("\nEnter the position and value to be added in this array\n");
	int pos, newValue;
	for(i=0; i<newSize; i++)
		printf("(%d)= %d \n",i+1, mergedA[i]);
	scanf("%d %d",& pos, & newValue );
	// new value and position received
	if(pos<=newSize && pos>0){

		newSize++;
		for(i=newSize-1; i>=pos-1; i--)
			mergedA[i]=mergedA[i-1];
			// shifted values pos to one index right

		mergedA[pos-1]=newValue;

			printf("\nNew array after inserting, \n");
			for(i=0; i<newSize; i++)
				printf("(%d)= %d \n",i+1, mergedA[i]);
	}else{
		printf("Invalid position!!!\n(Enter between 1 and %d)",newSize);



	}
//	newSize++;
//	for(i=newSize-1; i>=pos-1; i--)
//		mergedA[i]=mergedA[i-1];
//		// shifted values pos to one index right
//
//	mergedA[pos-1]=newValue;
//
//		printf("\nNew array after inserting, \n");
//		for(i=0; i<newSize; i++)
//			printf("(%d)= %d \n",i+1, mergedA[i]);






	return EXIT_SUCCESS;
}
