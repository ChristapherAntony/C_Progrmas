
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);

	int i, j, n=10, a[100]={1,5,7,1,5,9,6,1,5,8}, count;
	int b[100];    // for storing counted values of each element

	for(i=0; i<n; i++){
		count=1;
		if (a[i] != -1){
			for(j=i+1; j<n; j++){
				if(a[i]==a[j]){
					count++;
					a[j]= -1;
				}
			}
		}
		b[i]=count;
	}

	for(i=0; i<n; i++){
		if(a[i]!= -1 ){
			printf("Frequency of %d is==%d \n",a[i], b[i]);
		}

	}



	return EXIT_SUCCESS;
}
