/*
 ============================================================================
 Name        : Pattern.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void triangles();void hillPattern();void downHillPattern();void diamondPattern();void pyramidPattern123();
void project1();void star_W_M_E_3();void rhombus_star_pattern(); void hollowPattern();void fPatterns();
void patternABC123();
int i, j, s, k, n=5 ;
int section, row, col, colcol, colrow, rowcol, rowrow;

int main(void) {
	triangles();
	hillPattern();
	downHillPattern();
	diamondPattern();
	pyramidPattern123();
	project1();
	star_W_M_E_3();
	rhombus_star_pattern();
	hollowPattern();
	fPatterns();    //Q.3 not fully completed
	patternABC123();

	return EXIT_SUCCESS;
}

void triangles(){

	printf("\nLeft Triangle Bottom \n\n");
	for(i=1; i<=n; i++){
		for(j=1; j<=i; j++){
			printf("*  ");
		}
		printf("\n\n");
	}

	printf("\nLeft Triangle Top \n\n");
	int  decrementstar=n;          // we need 5 star at top
	for(i=1; i<=n; i++){
		for(j=1; j<=decrementstar; j++){
			printf("*  ");
		}
		decrementstar--;			// to decrement star one after one row downs
		printf("\n\n");
	}

	printf("\nRight Triangle Bottom \n\n");
	int  star=1,space=n-star;
	for(i=1; i<=n; i++){         //for assigning raws;
		for(s=1; s<=space; s++){ //printing space
			printf("   ");
		}
		for(j=1; j<=star; j++){  //printing star
			printf("*  ");
		}
		space--;
		star++;
		printf("\n\n");
	}

	printf("\nRight Triangle Top \n\n");
	int  spaceIncrement=0 ,stardecrement=n-spaceIncrement;
	for(i=1; i<=n; i++){         //for assigning raws;


		for(s=1; s<=spaceIncrement; s++){ //printing space
			printf("   ");
		}
		for(j=1; j<=stardecrement; j++){  //printing star
					printf("*  ");
				}
		spaceIncrement++;
		stardecrement--;
		printf("\n\n");
	}

}

void hillPattern(){

	int  star=1,space=n/2-star;
	printf("\nHill Pattern\n\n");
	for(i=1; i<=n/2; i++){
		for(s=1; s<=space; s++){
			printf("   ");
		}
		for(j=1; j<=star; j++){
			printf("*  ");
		}
		space--;				// for decrement space one by one
		star=star+2;			// for increment 2 by every row;
		printf("\n\n");
	}

}

void downHillPattern(){
	int space=1, star=n-space;
		printf("\nHill Pattern\n\n");
		for(i=1; i<=n; i++){
			for(s=1; s<=space; s++){
				printf("   ");
			}
			for(j=1; j<=star; j++){
				printf("*  ");
			}
			space++;
			star=star-2;
			printf("\n\n");
		}

}

void pyramidPattern123(){
	printf("\nPyramid pattern 123 top\n\n");
	int star=1, space=n-star;
	for(i=1; i<=n; i++){
		for (s=1; s<=space; s++){
			printf(" ");
		}
		for(j=1; j<=star; j++){
			printf("* ");
		}
		space--;
		star++;
		printf("\n");
	}

}

void diamondPattern(){
	printf("\nDiamondPattern 135...\n\n");
	int star=1, space=n-star;
	for(i=1; i<=n; i++){
		for(s=1; s<=space; s++){
			printf("  ");
		}
		for(j=1; j<=star; j++){
			printf("* ");
		}
		if(i>=n/2){
			star-=2;
			space++;
		}else{
			star+=2;
			space--;
		}
		printf("\n");

	}
	printf("\nDiamondPattern 123...321\n\n");
	int star2=1, space2=n-star2;
	for(i=1; i<=n; i++){
		for(s=1; s<=space2; s++){
			printf(" ");
		}
		for(j=1; j<=star2; j++){
			printf("* ");
		}
		if(i>=n/2){
			star2--;
			space2++;
		}else{
			star2++;
			space2--;
		}
		printf("\n");

	}

}

void project1(){
	int hight=n*2;
	int space=0, star=n-space;
	for(i=1; i<=hight; i++){
		for(s=1; s<=space; s++){
			printf("  ");
		}
		for(j=1; j<=star; j++){
			printf("* ");
		}
		if(i<hight/2){
			space++;
			star--;
		}else if(i>(hight/2)){
			space--;
			star++;
		}
		printf("\n");

	}
}

void star_W_M_E_3(){
	int width=n*2, star1=1, star2=1, space=width-(star1+star2);
	printf("\nM star\n");

	for(i=1; i<=n; i++){
		for(j=1; j<=star1; j++){
			printf("* ");
		}
		for(j=1; j<=space; j++){
			printf("  ");
		}
		for(j=1; j<=star1; j++){
			printf("* ");
		}
		star1++;
		space-=2;
		star2++;
		printf("\n");
	}
	printf("\nW star\n");
	int  s1=n,s2=n,sp=0;
	for(i=1; i<=n; i++){
		for(j=1; j<=s1; j++){
			printf("* ");
		}
		for(j=1; j<=sp; j++){
			printf("  ");
		}
		for(j=1; j<=s2; j++){
			printf("* ");
		}
		s1--;
		sp+=2;
		s2--;
		printf("\n");
	}
	printf("\n3 star\n");
	int st1=n,spc=0,h=n*2;
	for(i=1; i<=h; i++){
		for(j=1; j<=st1; j++){
			printf("* ");
		}
		for(j=1; j<=spc; j++){
			printf("  ");
		}
		if(i<h/2){
			st1--;
			spc++;
		}else if(i>h/2){
			st1++;
			spc--;
		}
		printf("\n");
	}
	printf("blank diamond\n");
	int str=n, spe=0, str2=n;
	for(i=1; i<=n*2; i++){
		for(j=1; j<=str; j++){
			printf("* ");
		}		for(j=1; j<=spe; j++){
			printf("  ");
		}		for(j=1; j<=str2; j++){
			printf("* ");
		}
		if(i<n){
			str--;
			spe+=2;
			str2--;
		}else if(i>n){
			str++;
			spe-=2;
			str2++;
		}
		printf("\n");

	}



}

void rhombus_star_pattern(){
	int space=n-1;
	printf("rhombus\n");
	for(i=1; i<=n; i++){
		for(j=1; j<=space; j++){
			printf("  ");
		}
		for(j=1; j<=n; j++){
			printf("* ");
		}
		space--;
		printf("\n");
	}

}

void hollowPattern(){


	printf("\n\nHollow Pattern\nHollow Square Star Pattern\n");
	for(i=1; i<=n; i++){
		for(j=1; j<=n; j++){
			if(i==1 || j==1 || i==n || j==n){
				printf("* ");
			}else printf("  ");
		}
		printf("\n");
	}

	printf("\n\nHollow right bottom triangle Star Pattern\n\n");
	for(i=1; i<=n; i++){
		for(j=1; j<=n; j++){
			if(i==n || j==n || (i+j==n+1) ){// n+1 because we adding positions
				printf("* ");
			}else{
				printf("  ");
			}
		}
		printf("\n");
	}
	printf("\n\nHollow left top triangle Star Pattern\n\n");
	for(i=1; i<=n; i++){
		for(j=1; j<=n; j++){
			if(i==1 || j==1 || (i+j==n+1) ){// n+1 because we adding positions
				printf("* ");
			}else{
				printf("  ");
			}
		}
		printf("\n");
	}
	printf("\n\nHollow right top triangle Star Pattern\n\n");
	for(i=1; i<=n; i++){
		for(j=1; j<=n; j++){
			if(i==1 || j==n || i==j ){
				printf("* ");
			}else{
				printf("  ");
			}
		}
		printf("\n");
	}
	printf("\n\nHollow pyramid Pattern\n\n");
	int w=n*2-1;
	for(i=1; i<=n; i++){
		for(j=1; j<=w; j++){
			if(i==n || i+j==n+1 || j-i==n-1){ // the relation is actually 4, but our n is 3 , so just adding 1
				printf("* ");
			}else{
				printf("  ");
			}
		}
		printf("\n");
	}
	printf("\n\nHollow diamond\n\n");
	int h=n*2-1;
	for(i=1; i<=h; i++){
		for(j=1; j<=n; j++){
//			if(i+j==temp/2 || i-j==temp/4 || i+j==temp || j-i==2){
			if(i+j==h+1 || i-j==h-1|| i+j==(h+1)*2 || j-i==n-1){
				printf("* ");
			}else{
				printf("  ");
			}
		}
		printf("\n");
	}



}

void fPatterns(){
	printf("Fumigation pattern questions pdf \n");


	printf("\nQuestion 1 \n\n");
	section=3, row=2, col=0;
	for(i=1; i<=section; i++){   // this loop is for section 1,2,3
		for(j=1; j<=col; j++ ){
			printf("*");
			printf("\n");        // in this loop (j) we print * vertically
		}
		for(j=1; j<=row; j++ ){
			printf("*");         // in this loop (j) we print * horizontally
		}
		printf("\n");			// next line new section
		row+=2;
		col+=3;
	}

	printf("\nQuestion 2 \n\n");
	section=3, row=3, col=1;
	for(i=1; i<=section; i++){   // this loop is for section 1,2,3
		for(j=1; j<=row; j++){
			printf("*");         // in this loop (j) we print * horizontally
		}
		for(j=1; j<=col; j++ ){
			printf("\n");		// in this loop (j) we print * vertically
			printf("*");

		}

		printf("\n");			// next line new section
		row+=3;
		col++;
	}


	printf("\nQuestion 3 \n\n");
	int columnR,columnC;
	section=3,row=3,columnC=1,columnR=2 ;

	for(i=1; i<=section; i++){

		if(i<=2){columnR=2;}        // if i== 3 the column r remains   as 2
		// extra condition to columnR remains to 2 up to section 2,
		// after i ==2 it will increase asper the working model

		for(j=1; j<=columnR; j++ ){
			for(k=1; k<=columnC; k++){
				printf("* ");

			}
			printf("\n");

		}
		for(j=1; j<=row; j++ ){
			printf("* ");
		}
		printf("\n");
		row+=3;
		columnC+=1;
		columnR+=1;

	}

	printf("Question 4\n\n");

	section=3,row=4,col=1;

	for(i=1; i<=section; i++){   // this loop is for section 1,2,3
		for(j=1; j<=col; j++ ){
			printf("*");
			printf("\n");        // in this loop (j) we print * vertically
		}
		for(j=1; j<=row; j++ ){
			printf("*");         // in this loop (j) we print * horizontally
		}
		printf("\n");			// next line new section
		row+=4;
		col+=1;

	}

	printf("Question 5\n\n");
	section=3, col=0, row=3;

	for(i=1; i<=section; i++){
		for(j=1; j<=col; j++){
			printf("*");
			printf("\n");
		}
		for(j=1; j<=row; j++){
			printf("*");
		}
		printf("\n");
		col+=3;
		row+=3;
	}

	printf("Question 6\n\n");
	section=5, row=10, col=1;
	for(i=1; i<=section; i++){
			for(j=1; j<=row; j++){
				printf("*");
			}
			for(j=1; j<=col; j++){
				printf("\n");
				printf("*");
			}
			printf("\n");
			row-=2;
			col+=1;

	}
	printf("Question 7\n\n");
	section=3, row=5, col=0;
	for(i=1; i<=section; i++){
		for(j=1; j<=col; j++ ){
			printf("*");
			printf("\n");
		}
		for(j=1; j<=row; j++ ){
			printf("*");
	    }
		printf("\n");
		row+=5;
		col+=3;
	}


	printf("Question 8 difficult action pending\n\n");
	printf("Question 9  note book\n\n");
	printf("Question 10 note book\n\n");


	printf("\nQuestion 11\n\n");
	section=4,row=2,col=1;
	for(i=1; i<=section; i++){
		for(j=1; j<=col; j++){
			printf("*\n");
		}
		for(j=1; j<=row; j++){
			printf("*");
		}
		printf("\n");
		row+=2;
		if(col==1){
			col=3;
		}else {col=1;}

	}

	printf("\nQuestion 12\n\n");
	for(i=1; i<=7; i++){
		for(j=1; j<=7; j++){
			if(i==1 || j==1 || i==7 || j==7 || j+i==8 || j==i ){
				printf("* ");
			}else{printf("  ");}

		}printf("\n");
	}

	printf("\nQuestion 13\n\n");
	section=3, row=3, colcol=1, colrow=2;
	for(i=1; i<=section;i++){
		for(j=1; j<=colrow; j++){
			for(k=1; k<=colcol; k++){
				printf("*");
			}
			printf("\n");
		}
		for(j=1; j<=row; j++){
			printf("*");
		}
		printf("\n");
		row+=3;
		colcol+=1;

	}

	printf("\nQuestion 14 note book \n\n");
	printf("\nQuestion 15 == 8 pending\n\n");
	printf("\nQuestion 16 == 11 completed \n\n");
	printf("\nQuestion 17 \n");

	section=3, col=3, rowrow=1, rowcol=3;
	for(i=1; i<=section; i++ ){
		if(i==1){col=0;}else{col=3;}
		for(j=1; j<=col; j++){
			printf("*");
			printf("\n");
		}// for printing colum

		for(j=1; j<=rowrow; j++){

			for(k=1; k<=rowcol; k++){
				printf("*");

			}
			printf("\n");
		}
		rowrow+=1;
		rowcol+=3;


	}

	printf("\nQuestion 18 \n\n");

	section=3, col=0, rowrow=2, rowcol=3;
	for(i=1; i<=section; i++ ){

		for(j=1; j<=col; j++){
			printf("*");
			printf("\n");
		}// for printing colum

		for(j=1; j<=rowrow; j++){

			for(k=1; k<=rowcol; k++){
				printf("*");

			}
			printf("\n");
		}

		rowcol+=3;
		col+=1;
	}

	printf("\nQuestion 22\n\n");
	int i, j, k, section=3, row=3, colcol=2, colrow=1;
	for(i=1; i<=section;i++){
		for(j=1; j<=colrow; j++){
			for(k=1; k<=colcol; k++){
				printf("X ");
			}
			printf("\n");
		}
		row=(i==3)?row+2:row;
		for(j=1; j<=row; j++){

			if(j<=i){
				printf("-");
			}else{printf("*");}
		}

		printf("\n");
		row+=3;
		colrow+=1;


	}
	///////////////////////////////////////////////////////
	printf("\nQuestion 22 other method\n\n");
	int x=1,y=2;
	 section=3,  colcol=2, colrow=1;

	for(i=1; i<=section;i++){
		row=(x+y);
		for(j=1; j<=colrow; j++){
			for(k=1; k<=colcol; k++){
				printf("X ");
			}
			printf("\n");
		}

		for(j=1; j<=row; j++){

			if(j<=x){
				printf("-");
			}else {printf("*");}
		}

		printf("\n");
		x++;
		y=y*2;
		colrow+=1;


	}


	printf("\nQuestion 23 not completed\n\n");
	int  sectionM=3,rowrow=1 , col=1, rowcol=6;
	int flag;

	for(i=1; i<= sectionM; i++){ // for assigning 4 main sections


		for(j=1; j<= rowrow; j++){

			for(k=1; k<=rowcol ; k++){

					if(k <= rowcol-2){
						printf("* ");
					}
					else  {
						printf("- ");
					}

			}
			rowcol--;
			printf("\n");
			for(k=1; k<=rowcol ; k++){
				if(j==1){
					printf("- ");
				}else{
					printf("\n");
				}
			}



		}
		col++;
	}


	printf("\nQuestion triangle with section\n\n");
	  section=3;
	int limit=3;

	for(i=1; i<=section; i++){  // loop for mainsection

		for(j=1; j<=limit; j++){
			for(k=1; k<=j; k++){
				printf("*  ");
			}
			printf("\n\n");
		}

		limit++;

	}




}

void patternABC123(){

	int v, h , limit=5;

	printf("Squire By changing values as 123 and abc\n");
	printf("\nprint i \n\n");
	for(i=1;i<=5; i++ ){
		for(j=1; j<=5; j++){
			printf("% d", i);
		}
		printf("\n");
	}
	printf("\nprint j \n\n");
	for(i=1;i<=5; i++ ){
		for(j=1; j<=5; j++){
			printf("% d", j);
		}
		printf("\n");
	}
	printf("\nprint abc in j position \n\n");
	for(i=1;i<=5; i++ ){
		for(j=1; j<=5; j++){
			printf("%c"" ", j+64);
		}
		printf("\n");
	}
	printf("\nprint abc in i position \n\n");
	for(i=1;i<=5; i++ ){
		for(j=1; j<=5; j++){
			printf("%c"" ", i+64);
		}
		printf("\n");
	}
	printf("\nprint 54321 in  j position \n\n");
	int m;
	for(i=1;i<=5; i++ ){
		for(j=1; j<=5; j++){
			m=6-j;
			printf("% d",m);
		}
		printf("\n");
	}
	printf("\nprint 54321 in  i position \n\n");

	for(i=1;i<=5; i++ ){
		for(j=1; j<=5; j++){
			m=6-i;
			printf("% d",m);
		}
		printf("\n");
	}
	printf("\nprint 54321 by reversing the loop \n\n");
	for(i=5; i>=1; i--){
		for(j=5; j>=1; j--){
			printf("%d ", j);
		}
		printf("\n");
	}
	printf("\n");
	for(i=5; i>=1; --i){
		for(j=5; j>=1; j--){
			printf("%d ", i);
		}
		printf("\n");
	}

	printf("Triangle By changing values as 123 and abc\n\n");
	for(i=1; i<=5; i++){
		for(j=1; j<=i; j++){
			printf("%d ", j);
		}
		printf("\n");
	}
	for(i=1; i<=5; i++){
		for(j=1; j<=i; j++){
			printf("%d ", i);
		}
		printf("\n");
	}
	for(i=1; i<=5; i++){
		for(j=1; j<=i; j++){
			printf("%c ", j+64);
		}
		printf("\n");
	}
	for(i=1; i<=5; i++){
		for(j=1; j<=i; j++){
			printf("%c ", i+64);
		}
		printf("\n");
	}
	printf("Triangle By changing values as 123 and abc in reverse \n\n");
	for(i=5; i>=1; i-- ){
		for(j=5; j>=i; j--){
			printf("%d ",j);
		}
		printf("\n");
	}
	for(i=1; i<=5; i++){
		for(j=1; j<=i; j++){
			printf("%d ", 6-j);
		}
		printf("\n");
	}
	printf("\n");
	int n=5, decrementStar=n;
	for(i=1; i<=n; i++){
		for(j=1; j<=decrementStar; j++){
			printf("%d ",n+1-j);
		}
		decrementStar--;
		printf("\n");
	}

	printf(" right triangle top\n");
	int space=0, star=5;

	for(i=1; i<=5; i++){
		for(j=1; j<=space; j++){
			printf("  ");
		}
		for(j=1; j<=star; j++){
			printf("%d ",6-i);
		}
		printf("\n");
		space++;
		star--;
	}



}



