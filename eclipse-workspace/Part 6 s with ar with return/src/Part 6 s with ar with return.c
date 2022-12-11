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

int findsum ();
int main(void) {
	setbuf(stdout,NULL);
	int k,num1,num2;
	printf("Function with argument with return value\n\n\n");

	printf("Enter 2 numbers\n");
	scanf("%d%d",&num1,&num2);

	k=findsum(num1,num2);/*here calling function is assigned to 'k' and used to print
	 	 	 	 	       the result, here we can see the parameters giving to function */

	printf("your result is %d",k);/* we can also directly replace the 'k' with calling
						           function that is findsum(num1,num2)*/

	return EXIT_SUCCESS;
}

int findsum(number1,number2){  /* in the ( are formal parameters) received from main function */
	int result;
	result=number1+number2;

	return result;  /*here return is specified as variable 'return' to return the value to
	 	 	 	 	 main blocks*/
}
