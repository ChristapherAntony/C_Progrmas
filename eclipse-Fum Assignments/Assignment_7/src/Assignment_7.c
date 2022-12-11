

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);

	int multiplier,i,limit=10;

	printf(" Multiplication Table\n");
	printf("**********************\n");

	printf("\nEnter the multiplier. ");
	scanf("%d",& multiplier);
	// received multiplier form user

	for(i=1; i<=limit; i++){
		printf("\n\n%d * %d = %d ", i, multiplier, i*multiplier);

	}




	return EXIT_SUCCESS;
}
