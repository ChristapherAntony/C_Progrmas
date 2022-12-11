/*
 ============================================================================
 Name        : print.c
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
	int num,i,j;
	puts("print rhombus star pattern");
	puts("'''''''''''''''''''''''''''\n\n");
	printf("number of rows");
	scanf("%d",&num);
	printf("\n");

    for(i=1; i<=num; i++)
    {
        /* Print trailing spaces */
        for(j=1; j<=num - i; j++)
        {
            printf("  ");
        }

        /* Print stars after spaces */
        for(j=1; j<=num; j++)
        {
            printf("* ");
        }

        /* Move to the next line */
        printf("\n");
    }



	return EXIT_SUCCESS;
}
