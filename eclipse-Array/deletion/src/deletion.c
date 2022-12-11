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

int main(void) {

	setbuf(stdout,NULL);

	int i, j, size=5, array[5]={20,30,40,50,60};

	int value=60, flag=0; // value to be deleted from an array.


	for(i=0; i<size; i++){
		
		if(array[i]==value){    // deletion value matching

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













//	printf("Before deletion \n");
//	for(i=0; i<size; i++){
//		printf(" %d |",array[i]);
//	}

