/*
 ============================================================================
 Name        : 8.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char bankname [25];
	float P,R,N,SI;
	setbuf(stdout,NULL);
	printf("Enter your Bank name : ");
	scanf("%s",&bankname);
	printf("Calculating simple interest for %s",bankname);

	printf("Enter principal Amount :");
	scanf("%f",&P);

	printf("Enter rate of interest");
	scanf("%f",&R);

	printf("Enter no of Years");
	scanf("%f",&N);

	SI=(P*R*N)/100;

	printf("Your simple interest is :%f",SI);





	return EXIT_SUCCESS;
}
