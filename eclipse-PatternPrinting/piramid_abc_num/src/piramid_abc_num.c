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
	int i, j, n=7, str=1, sp=n-str;

	for(i=1; i<=n; i++){
		for(j=1; j<=sp; j++){
			printf(" ");
		}
		for(j=1; j<=str; j++){
			if(j==1 || j== i*2-1 ){
				printf("*");
			}else{
				printf("-");
			}
		}
		printf("\n");
		sp--;
		str+=2;

	}
////////////////////////////////////////////////////////////
	printf("\n\n");

	n=7, str=1,sp=n-str;
	for(i=1; i<=n; i++){
		for(j=1; j<=sp; j++){
			printf(" ");
		}
		for(j=1; j<=str; j++){
			if(j==1 || j== i*2-1 || i==n){
				printf("%d",1);
			}else{
				printf("%c",j+63);
			}
		}
		printf("\n");
		sp--;
		str+=2;

	}
/////////////////////////////////////////////////////////////
	printf("\n\n");

	n=5;
	int k,k1;

	for(i=1; i<=n; i++){
		for(k=1; k<=n-i; k++){
			printf(" ");
		}  // for printing space

		for(j=1; j<=i; j++){
			printf("%d",j);
		}  // for printing first portion of

		for(k1=i-1;k1>=1;k1--){
			printf("%d",k1);
		}


		printf("\n");


	}



	n=5, str=1,sp=n-str;
	for(i=1; i<=n; i++){
		for(j=1; j<=sp; j++){
			printf(" ");
		}
		for(j=1; j<=str; j++){
			printf("*");
		}
		printf("\n");
		sp--;
		str+=2;

	}

	n=5, str=1,sp=n-str;
	for(i=1; i<=n; i++){
		for(j=1; j<=sp; j++){
			printf("%d",j);
		}
		for(j=1; j<=str; j++){
			printf("%d",j);
		}
		printf("\n");
		sp--;
		str+=2;

	}


	return EXIT_SUCCESS;
}
