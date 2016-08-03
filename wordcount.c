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

	FILE *palabras = fopen("text.txt", "wr");

		fprintf(palabras,"%s########", str);

	fclose(palabras);

	FILE *pala = fopen("text.txt", "r");
		int count = 1;
		while((loc = fgetc(pala)) != '#') {
			if(loc == ' ') {
				count++;
			}
		}
		printf("You typed in %d words.\n", count);


	fclose(pala);

return 0;
}
