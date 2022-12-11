#include <stdio.h>
#include <stdlib.h>

int main(void){
	setbuf(stdout,NULL);
	int  i, j, size=5, a[100]={23,45,12,67,89};
	int pos,flag=0;
	// deletion by position

	printf("\nEnter position to be deleted");
	scanf("%d", &pos);

	for(i= 0; i<size; i++){
		if(i==(pos-1)){
			for(j=i; j<size; j++){
				a[j]=a[j+1];
			}
			flag=1;
			size--;			//Deletion the size
		}
	}

	if(flag==0){
		printf("Entered position is Invalid");
	}else{
		printf("values after deletion \n");
		for(i=0; i<size; i++){
			printf(" %d |",a[i]);
		}
	}

	return EXIT_SUCCESS;
}
