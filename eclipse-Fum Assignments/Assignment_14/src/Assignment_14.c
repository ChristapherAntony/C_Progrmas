

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);

	int size;
	int i,j;
	int array1[50][50],array2[50][50];
	int arraySum[50][50];

	printf("Enter array limit");
	scanf("%d",& size);

	printf("\nEnter the values of array 1");
	for(i=0; i<size; i++){
		for(j=0; j<size; j++){
			scanf("%d",&array1[i][j]);
		}
	}
	printf("\nEnter the values of array 1");
	for(i=0; i<size; i++){
		for(j=0; j<size; j++){
			scanf("%d",&array2[i][j]);
		}
	}

	for(i=0; i<size; i++){
		for(j=0; j<size; j++){
			arraySum[i][j]=array1[i][j]+array2[i][j];
		}
	}





	printf("Sum of 2 arrays is:\n\n");
	for(i=0; i<size; i++){
		for(j=0; j<size; j++){
			printf("%d  ",arraySum[i][j]);
		}printf("\n\n");

	}



	return EXIT_SUCCESS;
}
