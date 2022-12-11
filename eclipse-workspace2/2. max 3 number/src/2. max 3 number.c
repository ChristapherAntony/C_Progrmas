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
		int num1,num2,num3,max;
		printf("Enter two numbers\n");
		scanf("%d%d%d",&num1,&num2,&num3);



		if((num1>num2)&&(num1>num3)){
				max=num1;
		}else if(num2>num3){
			max=num2;
		}else
			max=num3;

	printf("%d is the maximum number",max);

	return EXIT_SUCCESS;
}
