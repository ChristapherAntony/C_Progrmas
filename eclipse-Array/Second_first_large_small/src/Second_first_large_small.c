/*
 ============================================================================
 Name        : Second_first_large_small.c
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
	// Second Largest number

	int i, j, size=10, a[100]={1,1,3,4,5,6,7,8,1,10};
	int count=0;

	for(i=0; i<size; i++){
		count=0;
		for(j=0; j<size; j++){
			if(i!=j &&  a[i]<a[j]){
				count++;
			}
		}


		if(count==1){
			printf(" number %d\n",a[i]);
//			break;
		}
	}


	return EXIT_SUCCESS;
}
