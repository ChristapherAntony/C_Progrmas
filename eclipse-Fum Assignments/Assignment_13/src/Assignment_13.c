

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	setbuf(stdout,NULL);
	char word[20], revWord[20];
	int flag;

	printf("Enter a word");
	scanf("%s", word);



	strcpy(revWord, word);
	strrev(revWord);

	flag=strcmp(word,revWord);
	// used string functions

	if(flag==0){
		printf("Entered string is a palindrome");
	}else{
		printf("Entered string is not a palindrome");
	}








	return EXIT_SUCCESS;
}
