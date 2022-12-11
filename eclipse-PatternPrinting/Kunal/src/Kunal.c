/*
 ============================================================================
 Name        : Kunal.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void project1(); void leftSidedTriangle(); void rightSidedTriangle();void hillPattern(); void reverseHillPattern();void diamondPattern();
void project4();void project5();

int i,j,limit=5;
int main(void) {
	setbuf(stdout,NULL);

	project1();
	leftSidedTriangle();
	rightSidedTriangle();
	hillPattern();
	reverseHillPattern();
	diamondPattern();
	project4();     //number in decreasing star pattern
	project5();
//	project6();
//	project7();
//	project8();
//	project9();
//	project10();
//	project11();
//	project12();




	return EXIT_SUCCESS;
}

void project1(){
	printf("\nProject 1\n");
	for(i=1; i<=limit; i++){
		for(j=1; j<=limit; j++){
			printf("* ");
		}
		printf("\n");
	}
}

void leftSidedTriangle(){
	printf("\nLeft sided T Bottom 2\n");
	for(i=1; i<=limit; i++){
		for(j=1; j<=i; j++){
			printf("* ");
		}
		printf("\n");
	}

	printf("\nLeft sided T Top\n");
	for(i=1; i<=limit; i++){
		for(j=i; j<=limit; j++){
			printf("* ");
		}
		printf("\n");
	}
	printf("\n Decreasing triangle other way\n");
	for(i=1; i<=limit; i++){
		for(j=1; j<=limit-i+1; j++){ // when we use limit-i+1 the limit value become decrees
			printf("* ");
		}
		printf("\n");
	}


}



void rightSidedTriangle(){
	printf("\n Right sided triangle bottom(decreasing space increasing star)\n");
	for(i=1; i<=limit; i++){
		for(j=i; j<=limit; j++ ){
			printf("  ");
		}
		for(j=1; j<=i; j++){
			printf("* ");
		}
		printf("\n");
	}

	printf("\n Right sided triangle top (decreasing space increasing star)\n");
	for(i=1; i<=limit; i++){
		for(j=1; j<=i; j++){
			printf("  ");
		}
		for(j=i; j<=limit; j++){
			printf("* ");
		}
		printf("\n");
	}


}

void hillPattern(){
	int s=1;
	printf("\n Hill pattern \n");
	printf(" decreasing space T and direct hill pattern by using \n variable=v+2 insted of i\n\n");
	for(i=1; i<=limit; i++){
		for(j=i; j<=limit; j++){
			printf("  ");
		}
		for(j=1; j<=s; j++){
			printf("* ");
		}s+=2; // here we used s variable to print hill pattern at a single time

		printf("\n");
	}

	printf("\n Hill pattern \n");
	printf(" decreasing space, decreasing star right, increasing star\n considering 3 T\n\n");
	for(i=1; i<=limit; i++){
		for(j=i; j<=limit; j++){
			printf("  ");
		}
		for(j=1; j<=i; j++){
			printf("* ");
		}
		for(j=1; j<i; j++){  //for getting peek of hill we remove '=' from 'j<='
			printf("* ");
		}

		printf("\n");
	}
}

void reverseHillPattern(){
	printf("\n Hill pattern \n\n");
	int s=2;
	for(i=1; i<=limit; i++){
		for(j=1; j<=i; j++){
			printf("  ");
		}// for printing space
		for(j=i; j<=limit; j++){
			printf("* ");
		}
		for(j=i; j<limit; j++){
			printf("* ");
		}

		//s+=2;
		printf("\n");
	}


}
void diamondPattern(){
	printf("Using 2 hill pattern\n\n");
	for(i=1; i<limit; i++){   // here we just removed '=' to print side points
		for(j=i; j<=limit; j++){
			printf("  ");
		}
		for(j=1; j<=i; j++){
			printf("* ");
		}
		for(j=1; j<i; j++){  //for getting peek of hill we remove '=' from 'j<='
			printf("* ");
		}

		printf("\n");
	}
	for(i=1; i<=limit; i++){
			for(j=1; j<=i; j++){
				printf("  ");
			}// for printing space
			for(j=i; j<=limit; j++){
				printf("* ");
			}
			for(j=i; j<limit; j++){
				printf("* ");
			}

			//s+=2;
			printf("\n");
		}


}



void project4(){
	printf("\nProject 4\n");
	for(i=1; i<=limit; i++){
		for(j=1; j<=i; j++){
			printf("%d ",j);
		}
		printf("\n");
	}

}

void project5(){
	int totalColInRow;
	printf("\nProject 4\n");
	for(i=1; i<(2*limit); i++){
		totalColInRow=i>limit ? 2*limit-i : i;
		for(j=1; j<totalColInRow; j++){
			printf("* ");
		}
		printf("\n");
	}

}


































































