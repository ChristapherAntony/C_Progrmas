/*
 ============================================================================
 Name        : count.c
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
	int num,i,count=0;
	printf("enter a number");
	scanf("%d",&num);

	for(i=1;num>0;i++){
		num=num/10;
		count++;
	}
	printf("%d",count);

	return EXIT_SUCCESS;
}
