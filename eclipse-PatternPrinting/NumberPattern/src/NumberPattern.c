/*
 ============================================================================
 Name        : Pattern_alphabets.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void numberPattern();
int i,j,k,n;star1,star2,space;

int main(void) {
	setbuf(stdout,NULL);
	numberPattern();


	return EXIT_SUCCESS;
}

void numberPattern(){
	int p;
	star1=5;
	space=0;
	for(i=1; i<=5; i++){
		p=1;
		for(j=1;j<=space; j++){
			printf(" ");
		}
		for(j=1; j<=star1; j++){
			printf("%d ",p*i);
			p++;
		}
		printf("\n");
		star1--;
		space++;
	}




	printf("\nNumber pattern 2\n\n");
	n=1, star1=1;

	for(i=1; i<=8; i++){
		for(j=1;j<=star1; j++){
			if(j%2==0){
				printf("*");
			}else{printf("%d",n);}
		}
		printf("\n");

		if(i<4){
			star1+=2;
			n++;
		}
		else if(i>4){
			star1-=2;
			n--;
		}
	}


	printf("\nNumber pattern 3\n\n");
	int star=1;


	for(i=1; i<=7; i++){
		for(j=1; j<=star; j++){
			printf("%d ",j);
		}
		printf("\n\n");
		if(i<4){
			star+=2;
		}else if(i>=4){
			star-=2;
		}
	}






}
