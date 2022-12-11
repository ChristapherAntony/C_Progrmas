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
	char i='A',limit='Z';

	printf("To print all alphabets from a to z \n");
	// by using while loop
	while(i<=limit){
		printf("%c\n",i);
		i++;
	}

	// by using for loop
	for(i='A';i<=limit;i++){
		printf("%c,",i);
	}


	//by using do__loop

	printf("\n");
	do
	{printf("%c,",i);
		i++;
	}
	while (i<=limit);




	return EXIT_SUCCESS;
}
