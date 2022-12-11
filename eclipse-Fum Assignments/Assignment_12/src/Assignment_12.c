

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);
	int sizeOfArray, i, j, array[100];
	int temp;

	printf("Enter the size of an array");
	scanf("%d",& sizeOfArray);

	printf("\nEnter the values of array");
	for(i=0; i<sizeOfArray; i++){
		scanf("%d",& array[i]);
	}

	for(i=0; i<sizeOfArray-1; i++){
		for(j=(i+1); j<sizeOfArray; j++){
			if(array[i]<array[j]){
				temp=array[i];
				array[i]=array[j];
				array[j]=temp;
			}
		}
	}
	printf("\nArray:");
		for(i=0; i<sizeOfArray; i++){
				printf("%d  ", array[i]);
			}

	return EXIT_SUCCESS;
}
