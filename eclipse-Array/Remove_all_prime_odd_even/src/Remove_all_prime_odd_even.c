/*
 ============================================================================
 Name        : Remove_all_prime_odd_even.c
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
	int i, j, size=5, array[100],flag=0;

	printf("Enter the values");
	for(i=0; i<size; i++){
		scanf("%d", & array[i]);
	}                        // values scanned
	for(i=0; i<size; i++){
		printf(" %d |",array[i]);
	}

	for(i=0; i<size; i++){
		flag=0;
		for(j=2; j<(array[i])/2; j++){  //  j starts with 2  because not considering 1
			if(array[i]%j==0){  //detection
				flag = (array[i])==1 ? 0 : 1 ;
				flag =1;
				break;
				// deletion
			}
		}

		if(flag==0){


			for(j=i; j<size; j++){
				array[j]=array[j+1];
			}

			i--;
			size--;

		}
	}


printf("\nAfter deleting prime number\n");
for(i=0; i<size; i++){
	printf(" %d |" , array[i]);
}























	return EXIT_SUCCESS;
}
