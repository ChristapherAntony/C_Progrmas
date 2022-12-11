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
	int num,i,sum=0;
	printf("CALCULATOR FOR FINDING SUM OF ODD NUMBERS BETWEEN 0 TO N NUMBERS\n\n");
	printf("Enter limit---");
	scanf("%d",&num);

	for(i=1;i<=num;i++)
		if(i%2==1){sum=sum+i;}
					{printf("total value of odd numbers up to %d",sum);

	}

	return EXIT_SUCCESS;
}
