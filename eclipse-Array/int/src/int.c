/*
 ============================================================================
 Name        : deletion.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {

	setbuf(stdout,NULL);

	int i, j, size=5 ;
	float array[5]={2.4,30,40.5,1.3,60};
	int  flag=0; // value to be deleted from an array.


	for(i=0; i<size; i++){

		if(fmod(array[i], 2)==0 || fmod(array[i], 2)==1){    // deletion value matching

			for(j=i; j<size; j++){  //deleting the value and shifting the reaming
				array[j]=array[j+1];
			}
		flag=1;
	    size--;			// deleting the size also. other wise last position --
		}

	}

	if(flag==0){
		printf("Entered value not in this position");
	}else{
		printf("values after deletion \n");
		for(i=0; i<size; i++){
			printf(" %d |",array[i]);
		}
	}



	return EXIT_SUCCESS;
}











