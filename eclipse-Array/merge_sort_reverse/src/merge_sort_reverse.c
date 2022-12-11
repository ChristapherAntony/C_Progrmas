/*
 ============================================================================
 Name        : merge_sort_reverse.c
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
	int  array1[100]={23, 45, 78, 12, 66}, array2[100]={15, 75, 29, 99, 55}, mergedArry[100];
	int s1=5, s2=5, i,j, temp=0;



	printf("Merge 2 array\n\n");
	int mSize=(s1+s2);

	for(i=0; i<mSize; i++){    // here ar1 values will enter up to  4  (s1-1)
		mergedArry[i]=array1[i];
		if(i>=s1){
			mergedArry[i]=array2[temp];  // Initially temp=0
			temp++;
		}
	}

	printf("\tmerged array =");
	for(i=0; i<mSize; i++){
		printf("%d ",mergedArry[i]);
	}
	printf("\n\reverse array=");
	for(i=(mSize-1); i>=0; i--){
		printf("%d ",mergedArry[i]);
	}

	printf("\n\nsort in descending sorting\n");
	for(i=0; i<mSize; i++){
		for(j=i+1; j<mSize; j++){
			if(mergedArry[i]<mergedArry[j]){
				mergedArry[i]=mergedArry[i]+mergedArry[j];
				mergedArry[j]=mergedArry[i]-mergedArry[j];
				mergedArry[i]=mergedArry[i]-mergedArry[j];
			}
		}
	}

	printf("\n\tsorted array =");
	for(i=0; i<mSize; i++){
		printf("%d ",mergedArry[i]);
	}
	printf("\n\nsort in ascending sorting\n");
	for(i=0; i<mSize; i++){
		for(j=i+1; j<mSize; j++){
			if(mergedArry[i]>mergedArry[j]){
				mergedArry[i]=mergedArry[i]+mergedArry[j];
				mergedArry[j]=mergedArry[i]-mergedArry[j];
				mergedArry[i]=mergedArry[i]-mergedArry[j];
			}
		}
	}

	printf("\n\tsorted array =");
	for(i=0; i<mSize; i++){
		printf("%d ",mergedArry[i]);
	}


	return EXIT_SUCCESS;
}
