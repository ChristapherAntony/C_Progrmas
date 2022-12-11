#include<stdio.h>
#include<stdlib.h>
//int a[233]; //gLOBLE VAR
void getArray();
void displayArray();
int main(){
	setbuf(stdout,NULL);

int a[100],n;//BY DECLARING IN ALL FUNCTION SAME SAME OF ARRAY WE CAN USE OR BY DECLARING GLOBLEY
	printf("Enter the size");
	scanf("%d",&n);
	getArray(a,n);
	displayArray(a,n);
	}



void getArray(int a[50],int n){
int i;
	printf("Enter the array elements");
for(i=0;i<n;i++){
	scanf("%d",&a[i]);
	}
	}


void displayArray(int a[50],int n ){
	int i;
	printf("Your array is ");
for(i=0;i<n;i++){
	printf("%d ",a[i]);
	}
	}
