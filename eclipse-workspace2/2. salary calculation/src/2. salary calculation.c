/*
 ============================================================================
 Name        : sample.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>

int main(void){
	setbuf(stdout,NULL);
	float actualHoursWorked=0.0;
	float basicPayRatePerHour=12.0;
	float overtimePayRate=18.0;
	float weeklyHours=40.0;
	float grossPay=0.0;
	float taxPayable=0.0;
	float overTimeWorked=0;
	float tax_300=(300 * 15)/100;
	float tax_150=(150 * 20)/100;



	printf("Program for showing gross pay, tax deductions and net pay per week \n\n");

	printf("Enter number of hours worked in a week-");
	scanf("%f", & actualHoursWorked);//received input from user.
	printf("\n");

	// gross pay calculation.
	if (actualHoursWorked <= weeklyHours){
		grossPay=actualHoursWorked * basicPayRatePerHour;
	}else if(actualHoursWorked > weeklyHours){
		overTimeWorked = actualHoursWorked - weeklyHours;

		grossPay += (weeklyHours * basicPayRatePerHour);
		grossPay += (overTimeWorked * overtimePayRate);

	}  //gross pay calculation completed.


	//tax calculation started
	if (grossPay <= 300){
		taxPayable = grossPay * 15/100;

	}
	else if(grossPay >300 && grossPay <=450){
		taxPayable += tax_300;
		taxPayable += (grossPay-300) * 20/100;
	}
	else if (grossPay>450){
		taxPayable +=  tax_300;
		taxPayable += tax_150;
		taxPayable += (grossPay - 450)* 25/ 100;
	}
	// here tax calculation completed.


	// out put for user
	printf("Pay before tax =%1.2f \n", grossPay);
	printf("Tax payable    =%1.2f \n", taxPayable);
	printf("Net payable    =%1.2f \n", (grossPay - taxPayable));


















	return 0;
}

