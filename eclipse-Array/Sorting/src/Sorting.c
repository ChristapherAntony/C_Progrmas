/*
 ============================================================================
 Name        : Sorting.c
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
	int size, array[100], arraycopy[100], i, j, temp;

		printf("project to count odd and even numbers\n\n");

		printf("Enter size of an array\n");
		scanf("%d",& size);

		printf("Enter the values");
		for(i=0; i<size; i++){
			scanf("%d", & array[i]);
		}

		for(i=0; i<size; i++){
			arraycopy[i]=array[i];
				}



		// now need to sort in ascending order
		// using temp;

		for(i=0; i<size-1; i++){   // i==0 and j==2 because comparing with 1 position with 2 nd one
			for(j=i+1; j<size; j++){  //
				if(array[i]<array[j]){
					temp=array[i];
					array[i]=array[j];
					array[j]=temp;
				}
			}
		}
		printf("\nSorted arry is ");
		for(i=0; i< size; i++){
			printf("%d  ", array[i]);
		}
		printf("\n\nsorting with out using other variable");

		for(i=0; i<size; i++){
			arraycopy[i]=arraycopy[i]+arraycopy[i+1];
			arraycopy[i+1]=arraycopy[i]-arraycopy[i+1];
			arraycopy[i]=arraycopy[i]-arraycopy[i+1];
		}
		printf("\n\nsorted array is=");
		for(i=0; i< size; i++){
			printf("%d  ", arraycopy[i]);
		}




	return EXIT_SUCCESS;
}
