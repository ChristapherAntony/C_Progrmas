/*
 ============================================================================
 Name        : AccessingOddAndEven.c
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
	int size, array[100], i, even=0, odd=0, evenSum=0, oddSum=0;

	printf("project to count odd and even numbers\n\n");

	printf("Enter size of an array\n");
	scanf("%d",& size);

	printf("\nEnter the values\n");
	for(i=0; i<size; i++){
		scanf("%d", & array[i]);
	}

	for(i=0; i<size; i++){
		if(array[i]%2==0)  // here we need to access array[i] not only i.
		{
		 	even++;
		}else{odd++;}
	}
	printf("\nNumber of even numbers are: %d.\nNumber of odd numbers are: %d.", even, odd);




	printf("\n\n\nNext, find sum of odd and even values\n");
	for(i=0; i<size; i++){
		if(array[i]%2==0){
			evenSum=evenSum+array[i];
		}else{oddSum=oddSum+array[i];}
	}
	printf("\n\tSum of even numbers are: %d.\n\tNumber of odd numbers are: %d.", evenSum, oddSum);



	printf("\n\n\nNext, Multiply all odd numbers with 2 then display new and old array.\n");
	int newArray[100];

	for(i=0; i<size; i++){
		if(array[i]%2!=0){
			newArray[i]=array[i]*2;
		}else{newArray[i]=array[i];}
	}
	printf("\n\tnew array is :");
	for(i=0; i<size; i++){
		printf("%d  ", newArray[i]);
	}
	printf("\n\told array is :");
	for(i=0; i<size; i++){
		printf("%d  ", array[i]);
	}

	printf("\n\n\nNext, Find sum of 2 array.\n");
	int sumArray[100];

	for(i=0; i<size; i++){
		sumArray[i]=array[i]+newArray[i]; // finding sum
	}
	printf("Sum= ");
	for(i=0; i<size; i++){
		printf("%d ",sumArray[i]);
	}

	printf("\n\n\nNext, search Key .\n");
	int searchKey, found=0, position;
	printf("  Enter a search key (Sum array)");
	scanf("%d",& searchKey);


	for(i=0; i<size; i++){
		if(searchKey==sumArray[i]){
			found=1;
			position=i+1;
			break;
		}
	}
	if(found==1){
		printf("\tItem found at %d th position", position );
	}else{printf("\tItem not found");}



	return EXIT_SUCCESS;
}
