/*
 ============================================================================
 Name        : Assignment_19.c
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
	float annualIncome;
	float taxPayable=0;

	float tax_5=(250000 * 5)/100;
	float tax_10=(500000 * 20)/100;
	float tax_rest=(annualIncome-1000000 * 30)/100;

	printf("Enter the annual income");
	scanf("%f",& annualIncome);

	//tax calculation started
	if (annualIncome <= 250000){
		taxPayable = 0;
	}else if (annualIncome >250000 && annualIncome <=500000){
		taxPayable += (annualIncome - 250000)* 5/ 100;
	}else if (annualIncome >500000 && annualIncome <=1000000){
		taxPayable  +=  tax_5;
		taxPayable += (annualIncome - 500000)* 20/ 100;
	}else if (annualIncome >1000000 ){
		taxPayable  +=  tax_5;
		taxPayable += tax_10;
		taxPayable += tax_rest;
	}
	// here tax calculation completed

	printf("Income tax amount =%.2f", taxPayable);



	return EXIT_SUCCESS;
}
