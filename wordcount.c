/* Mariposa Lee, reads in userinput to write words to text.txt then counts the amount of words by using the amount of spaces. I researched quite a bit for the counting spaces part and mashed in a bunch of ideas together.*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main () {
char str1[50];
char f[8];
strcpy(f, "########");
printf("Enter a string with multiple words separated by spaces.\n");
fgets(str1, sizeof(str1), stdin);
FILE *inp = fopen("text.txt", "wr");
fprintf(inp, "%s %s", str1, f);
fclose(inp);

FILE *inw = fopen("text.txt", "r");  /*Opened, closed, opened as a new file variable to make it more clear*/
char word;
int count;
while((word=fgetc(inw))!= '#'){
		if (word == ' ')
		count++;
		}
/*
while((bleh = fgetc(inw) != '#')) {
	if (isspace(count)) {
		word++; }
		}
This was the first draft until I realized it only read 0 spaces every time.*/
printf("You have entered %d words.\n", count);
return 0;
}
