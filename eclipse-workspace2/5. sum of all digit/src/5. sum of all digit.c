/*
 ============================================================================
 Name        : .c
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
	int i,num,sum=0;

	printf("Enter any number: ");
	scanf("%d",&num);
	printf("%d",num%10);



	for(i=1;num>=0;i++){
		sum=sum+(num%10);
		num=num/10;

	}
	printf("sum of total digit is %d ",sum);


	return EXIT_SUCCESS;
}
