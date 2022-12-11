/*
 ============================================================================
 Name        : triangle.c
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

    int a,b,c;

    /* Input three sides of a triangle */
    printf("Enter three sides of triangle: \n");
    scanf("%d%d%d", &a, &b, &c);

    if((a+b)>c){
    	if((b+c)>a){
    		if((c+a)>b){
    			printf("valid");
    			}else printf("invalid");

    		}else printf("invalid");

    	}else printf("invalid");


    if((a+b> c)&&(a+c>b)&&(b+c>a)){

    printf("valid");}

    else {printf("invalid");}







	return EXIT_SUCCESS;
}
