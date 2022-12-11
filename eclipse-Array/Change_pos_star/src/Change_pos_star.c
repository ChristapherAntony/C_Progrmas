/*
 ============================================================================
 Name        : Change_pos_star.c
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

	int i, size=10, a[100]={1,5,10,1,9,3,10,4,7,6};

	for(i=1; i<=size; i++){
		if(i%2!=0){
			a[i]='*';
		}
	}
	for(i=0; i<size; i++){
		if(a[i]=='*'){
			printf("* ");
		}
		else
		printf("%d ",a[i]);
	}
	return EXIT_SUCCESS;
}
