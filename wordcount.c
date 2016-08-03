/* Madeleine Charity 
* Write a program wordcount.c that takes in a text file, text.txt and prints to screen the number of words in the file. You may consider any non-whitespace characters surrounded by whitespace to be a word. The end of the file will be "########". Submit only your wordcount.c file.*/

#include <stdio.h>
#include <string.h> 
#include <ctype.h>

int main () {

	FILE *text; 
	text = fopen ("text.txt", "r"); 
	char word[1000];
	fgets(word, 1000, text);
	printf("%s", word);
	int length = strlen(word);
	int counter = 0;
	int i;
	for (i=0;i<length;)
	{
		if (isalnum(word[i]))
		{
			i++;
			if (isspace(word[i]))
			{	i++;
				if (isalpha(word[i])||ispunct(word[i]))
				{	counter++;
					i++;
				}
			}
		}
	else
		i++;
	}
	printf("File \"text.txt\" has %d words.\n", counter);
	fclose(text);
	return 0;
}
