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

	int num=14,i,flag=0;
	for(i=2;i<num;i++)
	{if (num%i==0)
	{
		flag=1;
		break;		}
	}
	if (flag==1){printf("%d is not a prime number",num);}
	else{printf("%d is a prime number",num);}



	return EXIT_SUCCESS;
}
