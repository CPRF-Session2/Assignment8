/* Count the words in a string, now with user-input! The user types in a string, which then gets outputted to output.c, where it can be evaluated and the amount of words can be counted. - Amanda Cuevas */
#include <stdio.h>
#include <string.h>

int main()
{
	char str[100];
	int call;
	int loc = 0;
		printf("Please enter a string of words to be inputted into the text file.\n");
		fgets(str, sizeof(str), stdin);
		str[strlen(str) - 1] = '\0';
/* ^^^ Gets string */
	FILE *palabras = fopen("text.txt", "wr"); /* Opens file. */

		fprintf(palabras,"%s########", str); /* Prints string to text file, and adds end of line character. */

	fclose(palabras); /* Closes file */

	FILE *pala = fopen("text.txt", "r"); /* Reopens file */
		int count = 1;
		while((loc = fgetc(pala)) != '#') {
			if(loc == ' ') {
				count++;
			}
		}
		/* ^^^ Checks for whitespace and increments counter if finds one. Stops when it sees "#", or the end of line character. */
		printf("You typed in %d words.\n", count);


	fclose(pala); /* Closes file */

return 0;
}
