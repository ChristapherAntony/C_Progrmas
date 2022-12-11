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
	int a[1000];
	int i,limit;
	printf("enter a limit --");
	scanf("%d",&limit);

	printf("Enter values \n");
	for (i=0;i<limit;i++)
	{scanf("%d",&a[i]);}

	printf("Entered values are --");
	for (i=0;i<limit;i++)
	{printf("%d ",a[i]);}




	return EXIT_SUCCESS;
}
