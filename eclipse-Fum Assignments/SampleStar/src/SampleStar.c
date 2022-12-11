/*
 ============================================================================
 Name        : SampleStar.c
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

	int i, j, starL=1,space=5,starR=1;

	for(i=1; i<=8; i++){


		for(j=1; j<=starL; j++){
			printf("* ");
		}
		for(j=1; j<=space; j++){
			printf("  ");
		}

		starR= i==4 ? 3: starR;
		starR= i==5 ? 3: starR;


		for(j=1; j<=starR; j++){
			printf("* ");
		}
		printf("\n");
		if(i<4){
			starR++;
			starL++;
			space-=2;
		}else if(i>=4){
			starR--;
			starL--;
			space+=2;
		}




	}
	return EXIT_SUCCESS;
}
