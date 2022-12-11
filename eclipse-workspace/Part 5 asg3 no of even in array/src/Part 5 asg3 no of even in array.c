/*
 ============================================================================
 Name        : Part.c
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
	int sum=0,i,limit,value[50];

	printf("Enter array limit");
	scanf("%d",&limit);

	printf("Enter array values");
	for(i=0;i<limit;i++){
		scanf("%d",&value[i]);
	}
	for(i=0;i<limit;i++){
		if(value[i]%2==0){
			sum=sum+1;
		}
	}
	printf("Number of even numbers in the given array is %d",sum);


	return EXIT_SUCCESS;
