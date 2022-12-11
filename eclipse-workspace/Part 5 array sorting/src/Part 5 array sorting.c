/*
 ============================================================================
 Name        : Part.c
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
	int values[50],i,j,temp,limit;
    printf("Enter a limit");
    scanf("%d",&limit);

    printf("Enter values");
    for (i=0;i<limit;i++){
        scanf("%d",&values[i]);

    }

    for (i=0;i<limit-1;i++){
    	for(j=i+1;j<limit;j++){
    		if(values[i]>values[j]){
    			temp=values[i];
    			values[i]=values[j];
    			values[j]=temp;
    		}

    	}
    }

    printf("sorted values are ");
    for (i=0;i<limit;i++){
    	printf("%d  ",values[i]);
    }

	return EXIT_SUCCESS;
}
