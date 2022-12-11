/*
 ============================================================================
 Name        : frequency_of_each_element.c
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
	int i, j, n=10, count, a[100]={4, 8, 3, 4, 1, 3, 4, 2, 1, 10};
	int b[100];
	// to find frequency of each numbers

	for(i=0; i<n; i++){
		count=1;			// in next round count reset to 1
		if (a[i] != -1){    //if we avoid already counted position.


		for(j=i+1; j<n; j++){
			if(a[i]==a[j]){   // comparing 1 to next one
				count++;     // count the frequency if any one match
				a[j]=-1;     // assign -1 for counted frequency , avoid repetition while i become that one
			}
		}
		b[i]=count;  		// Assign our count to a new array
		}

	}
	// for printing our count corresponding to element
	for(i=0; i<n; i++){
		if(a[i] != -1){     // with condition we can avoid repeated position, our aim is to match base array value to counted array
			printf("%d Frequency = %d\n",a[i], b[i]);
		}
	}




	return EXIT_SUCCESS;
}
