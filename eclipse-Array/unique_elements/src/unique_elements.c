/*
 ============================================================================
 Name        : unique_elements.c
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
	int i, j, count, array[100]={1,2,3,3,5}, size=5;
	printf("unique numbers are ");
	for(i=0; i<size; i++){
		count=0;
		for(j=0; j<size; j++){
			if(i!=j && array[i]==array[j]){  // checking  number repeating or not
				count=1;					// flag become 1 when a number repeat other
				break;
			}
		}
		if(count==0){
			printf("%d, ",array[i]);
		}

	}

/////////////////////////////////////////////////////////////

	printf("\n\ndelete dupe element");
	int  flag=0, a[50]={1,2,3,3,3}, s=5;
	printf("unique numbers are ");
	for(i=0; i<s; i++){
		flag=0;
		for(j=0; j<s; j++){
			if(i!=j && a[i]==a[j]){  // checking  number repeating or not
				flag=1;					// flag become 1 when a number repeat other
				break;
			}
		}
		if(count==1){
			for(j=i; j<s; j++){  //deleting the value and shifting the reaming
				a[j]=a[j+1];
			}
		count=1;
	    s--;

		}

	}
	printf("\nafter deleting");
	for(i=0; i<s; i++){
		printf("%d  ",a[i]);
	}




	return EXIT_SUCCESS;
}
