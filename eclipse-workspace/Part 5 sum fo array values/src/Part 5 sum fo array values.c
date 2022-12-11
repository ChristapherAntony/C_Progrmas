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
	int values[1000];
	int limit,i,sum=0;
	printf("enter array limit");
	scanf("%d",&limit);

	printf("enter values");

	for (i=0;i<limit;i++)
	{scanf("%d",&values[i]);}

	for (i=0;i<limit;i++)
	{sum=sum+values[i];}

	printf("total values of entered numbers %d ",sum);







	return EXIT_SUCCESS;
}
