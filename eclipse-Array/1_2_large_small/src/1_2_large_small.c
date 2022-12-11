/*
 ============================================================================
 Name        : 1_2_large_small.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include<limits.h>

int main(void) {
	setbuf(stdout,NULL);
	int i, largest=0, secondLargest=0; /* we declare two variable for finding
										comparing with array elements  */
	int a[50]={1,2,3,4,5,6,7,8,9,10},n=10;

	for(i=0; i<n; i++){
		if(a[i]>largest){		    //2
			secondLargest=largest;  //3
			largest=a[i];           //4
		}
		else if(a[i]>secondLargest){ //5
			secondLargest=a[i];		 //6
		}
	}
	printf("Largest=%d\nSecond largest=%d",largest,secondLargest);

////////////////////////////////////////////////////////////////////////
	int smallest=INT_MAX, secondSmallest=INT_MAX;

	for(i=0; i<n; i++){

		if(a[i]<smallest){
			secondSmallest=smallest;
			smallest=a[i];
		}
		else if(a[i]<secondSmallest){
			secondSmallest=a[i];
		}
	}
	printf("\n\nSmallest=%d\nSecond Smallest=%d",smallest,secondSmallest);














	return EXIT_SUCCESS;
}
