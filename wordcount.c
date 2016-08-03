//Ashank Kumar, reads a file and prints the words in it
#include <stdio.h>
#include <string.h>

int main()
{
	FILE *fileVar = fopen("text.txt", "r");
	char c;

	while((c = fgetc(fileVar)) != '#')
	{
			if(c == ' ')
				printf("\n");
			else
				printf("%c", c);
	}	

	fclose(fileVar);

	return 0;
}
