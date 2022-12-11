
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);

	int i,j, k, size=5;
	int array[100]={1,2, 5,3,5};
	int flag;

	// first need to find unique number
	for(i=0; i<size ; i++){
		flag=0;
		for(j=0; j<size ; j++){
			if(i!=j && array[i]== array[j]){
				flag=1;
				break;
			}

		}if(flag==0){
			for(k=i; k<size; k++){
				array[k]=array[k+1];

			}
			i--;
			size--;
		}
		}
	printf("after deleting unique numbers\n");
	for(i=0; i<size ; i++){
		printf("%d  ", array[i]);
	}





	return EXIT_SUCCESS;
}








//for(k=i; k<size; k++){
//	array[k]=array[k+1];
//
//}
//i--;
//size--;
