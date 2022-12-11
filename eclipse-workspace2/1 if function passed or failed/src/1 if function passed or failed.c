/*
 ============================================================================
 Name        : 1.c
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
	float mark,passmark=40;
	printf("Enter your mark out of 100 =");
	scanf("%f",&mark);

    if(mark>=passmark){
    	printf("You have passed the exam");
    }else{printf("Failed try again");
    }
    printf("\n");
    /* functions for showing grade obtained*/
    printf("Your grade is ");
    if(mark>=90){
    		printf("A");
    	}else if(mark>=80){
    		printf("B");
    	}else if(mark>=70){
    		printf("C");
    	}else if(mark>=60){
    		printf("D");
    	}else if(mark>=50){
    		printf("E");
    	}else if(mark<50){
    		printf("F");
    	}




	return (0);
}


