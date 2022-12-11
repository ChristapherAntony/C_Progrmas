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


int sum();  /* declaration of fun. return type is specified as (int) because it need to
 	 	 	 return value to main function and in the form of integer in this case*/

int main(void) {
	setbuf(stdout,NULL);
	int result;
	printf("no argument with return value\n ");
	printf("to print 200\n\n\n");

	result=sum();  /*here calling function is assigned to result and used to print
	 	 	 	 	 the result, here we can see no parameters */
	printf("%d",result); /* we can also directly replace the 'result' with calling
						function that is sum()*/


	return EXIT_SUCCESS;
}


int sum(){
	int result;
	result=200+200;  /* it is the body of function to be performed , irrespective of
	 	 	 	 	  argument , this sum function always return a fixed result*/

	return result;  /*here return is specified as variable 'return' to return the value to
	 	 	 	 	 main blocks*/
}
