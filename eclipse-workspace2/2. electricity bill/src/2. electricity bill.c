/*
 ============================================================================
 Name        : .c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
Write a C program to input electricity unit charges and calculate total electricity bill according to the given condition:
For first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill */

#include <stdio.h>
#include <stdlib.h>


int main(void) {
	setbuf(stdout,NULL);

	float unit,amt,totalamount,surcharge;
	printf("Enter your electricity consumed unit");
	scanf("%f",&unit);

	if(unit<=50){
		amt=unit*.5;
	}else if(unit<=150){
		amt=((50*.5)+(unit-50)*.75);
	}else if(unit<=250){
		amt=(50*.5)+(100*.75)+(unit-150)*1.2;
	}else if(unit>250){
		amt=220+(unit-250);
	}else {printf("invalid unit");
	}

	surcharge=amt*20/100;
	totalamount=amt+surcharge;
	printf("amt           --Rs.%f\n",amt);
	printf("surcharge     --Rs.%f\n",surcharge);
	printf("bill payable  --Rs.%f",totalamount);


	return EXIT_SUCCESS;
}
