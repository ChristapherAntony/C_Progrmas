/*
 ============================================================================
 Name        : All_in.c
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
	int i, j, n=5, a[100]={1,4,6,8,3};


	for(i=0,j=n-1; i<j; i++,j-- ){
		a[j]=a[i]+a[j];
		a[i]=a[j]-a[i];
		a[j]=a[j]-a[i];


	}





	printf("\n\nAfter the deletion \n");
	for(i=0; i<n; i++){
		printf("%d  ",a[i]);
	}



	return EXIT_SUCCESS;
}
