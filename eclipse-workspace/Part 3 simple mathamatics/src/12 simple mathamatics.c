/*
 ============================================================================
 Name        : 12.c
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
	int num1,num2,choice,result;
	printf("enter two numbers");
	scanf("%d%d",&num1,&num2);
	printf("1 for Addition \n2 for Subtraction \n3 for Multiplication \n4 for division \nPlease select");
    scanf("%d",&choice);

	if(choice==1){result=num1+num2;
	printf("Result=%d",result);}

	else if(choice==2){result=num1-num2;
	printf("Result=%d",result);}

	else if(choice==3){result=num1*num2;
	printf("Result=%d",result);}

	else if(choice==4){result=num1/num2;
	printf("Result=%d",result);}

	else{printf("fool");}














	return EXIT_SUCCESS;
}
