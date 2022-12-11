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
	int num,i,lastdigit,firstnumber;
	printf("Enter a number ");
	scanf("%d",&num);

	//to find last digit of a number ,divide number with 10 and the mode
	lastdigit=num%10;

	// to find first digit divide by 10 up to num >=
	for(i=1;num>=10;i++){
		num=num/10;
		firstnumber=num;
	}

	printf("first number is %d \n",firstnumber);
	printf("last number is %d ",lastdigit);

	return EXIT_SUCCESS;
}
