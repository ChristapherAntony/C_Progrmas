/*
 ============================================================================
 Name        : print.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description :  print all even numbers from 1 to n
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);
	int low,high,j,sum1=0,sum2=0,count=0,count2;
	printf(" print all even and odd numbers between a range\n");
	printf("Enter low and high limit,--\n");
	scanf("%d%d",&low,&high);

	printf("\n\n\n");
	printf("even numbers between %d and %d limit\n",low,high);
	printf(".....................................\n");

	// finding even numbers using while loop
	int i=low;
	while (i<=high){
		if(i%2==0){
			printf("%d\n",i);
			sum1=sum1+i;
			count++;}

		i++;
	}
	printf("sum of all even numbers(%d) are %d",count,sum1);


	printf("\n\n\n");
	printf("odd numbers between %d and %d limit\n",low,high);
	printf("....................................\n");
	// Find even numbers using for loop

	for(j=low;j<=high;j++){
		if(j%2!=0){
		printf("%d\n",j);
		sum2=sum2+j;
		count2++;}
	}printf("sum of %d odd numbers are %d",count2,sum2);
	return (0);
}
