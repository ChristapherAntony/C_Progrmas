/*
 ============================================================================
 Name        : Assignment_11.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : The program should accept an array and display the number of even numbers contained
  	  	  	   in that array

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);
	int sum=0,i,size,array[100];

	printf("Enter the size of an array");
	scanf("%d",&size);

	printf("Enter array values");
	for(i=0;i<size;i++){
		scanf("%d",&array[i]);
	}
	for(i=0;i<size;i++){
		if(array[i]%2==0){
			sum=sum+1;
		}
	}
	printf("Number of even numbers in the given array is %d",sum);




	return EXIT_SUCCESS;
}
