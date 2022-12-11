/*
 ============================================================================
 Name        : Assignment 7.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : sum of all the odd numbers for a given limit

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);
	int limit,i,sum=0;

	printf("Enter a limit ");
	scanf("%d", &limit);
	// received limit from user

	for(i=1; i<=limit; i++){
		if(i%2 != 0){
			sum+=i;
		}
	}
	// sum of odd numbers using loop

	printf("\nSum of odd numbers = %d", sum);

	return EXIT_SUCCESS;
}
