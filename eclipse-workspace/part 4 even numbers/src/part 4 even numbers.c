/*
 ============================================================================
 Name        : part.c
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
	int num,i;
	printf("enter a number");
	scanf("%d",&num);

	for(i=2;i<=num;i++){if(i%2==0)
	{printf("%d\n",i);}
	}





	return EXIT_SUCCESS;
}
