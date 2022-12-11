/*
 ============================================================================
 Name        : number.c
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
	int month,ndays;
	char Jan,Feb;
	printf("number of days in a month\n\n\n");

	printf("Enter Month number");
	scanf("%d",&month);

	if(month==1){month='Jan';}
	else if(month==2)month='Feb';
	else if(month==3)month='Mar';
	else if(month==4)month='Apr';
	else if(month==5)month='may';
	else if(month==6)month='Jun';
	else if(month==7)month='Jul';
	else if(month==8)month='Aug';
	else if(month==9)month='Sep';
	else if(month==10)month='Oct';
	else if(month==11)month='Nov';
	else if(month==12)month='Dec';
	else{printf("not a month");}
	printf("it's %d" ,month);

	if((month==Jan)||(month=='Mar')||(month=='may')||(month=='Jul')||(month=='Aug')||(month=='Oct')||(month=='Dec')){
		ndays=31;
	}else if(month=='Feb'){
		ndays=28/29;
	}else if((month=='Apr')||(month=='Jun')||(month=='Sep')||(month=='Nov')){
		ndays=30;
	}
	printf("it has %dth days.",ndays);




	return EXIT_SUCCESS;
}
