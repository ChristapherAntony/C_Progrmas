/*
 ============================================================================
 Name        : zero_to_end_start.c
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
	int i, j;
	int a[50]={1,2,3,4,5,6,7,8,9,10},n=10;

	for(i=0; i<n; i++){
		for(j=i+1; j<n; j++){
			if(a[j]==0){
				a[i]=a[j];
				a[]
			}
		}
	}


	return EXIT_SUCCESS;
}





////////////////////////////////////////////////////

//#include<stdio.h>
//
//int main()
//{
//	setbuf(stdout,NULL);
//    int count=0,i,j,n,temp;
//    int a[20];
//    printf("enter the size of the array\n");
//    scanf("%d",&n);
//    printf("enter first arrays\n");
//    for(i=0;i<n;i++)
//    {
//        scanf("%d",&a[i]);
//    }
//    for(i=0;i<n;i++)
//    {
//       for(j=i+1;j<n;j++)
//       {
//           if(a[j]==0)
//           {
//               temp=a[i];
//               a[i]=a[j];
//               a[j]=temp;
//           }
//       }
//    }
//    for(i=0;i<n;i++)
//    {
//        printf("%d",a[i]);
//    }
//    return 0;
//}

