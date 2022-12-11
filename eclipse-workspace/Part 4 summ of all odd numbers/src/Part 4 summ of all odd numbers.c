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
	int lowerlimit=5,upperlimit=10,i,sum=0;

	for(i=lowerlimit;i<=upperlimit;i++)
	{if(i%2!=0){sum=sum+i;}
	}
	printf("summ all odd numbers is %d",sum);


	return EXIT_SUCCESS;
}
