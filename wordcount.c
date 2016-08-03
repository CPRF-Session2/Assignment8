/*Jinoo Hong*/
/*Write a program `wordcount.c` that takes in a text file, `text.txt` and prints to screen the number of words in the file.  You may consider any non-whitespace characters surrounded by whitespace to be a word.  The end of the file will be `"########"`.  Submit only your wordcount.c file.*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main () {
	FILE *fileptr = fopen("text.txt", "r");
	int words = 0;
	char current;
	int space = 0, hash = 0;
	current = fgetc(fileptr);
	if (isalpha(current)==0||isdigit(current)==0) {
		words ++;
	}
	do {
		current = fgetc(fileptr);
		if (current == ' '|| current == '\n') {
			space = 1;
		}
		else if (current == '#') {
			hash++;
		}
		else {
			if (space == 1){
				space =0;
				words ++;
			}
		}
	}
	while (hash<8);
	printf("You have %d words\n", words);
	return 0;
}
