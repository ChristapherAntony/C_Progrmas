/*
 ============================================================================
 Name        : Sample.c
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
	int i, j, num=1, w=1, n=8;

	for(i=1; i<=8; i++){
		for(j=1; j<=w; j++){
			if(j%2!=0){
				printf("%d",num);
			}else{
				printf("*");
			}
		}
		printf("\n");

		if(i<4){
			w+=2;
			num++;

		}else if(i>4){
			w-=2;
			num--;
		}
	}






	return EXIT_SUCCESS;
}
