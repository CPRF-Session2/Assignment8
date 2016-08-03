#include <stdio.h>
#include <ctype.h>

int main()
{
	FILE *file = fopen("text.txt", "r");
	char text[50] = "";
	int words = 0;
	int i;

	fgets(text, sizeof(text), file);
	fclose(file);

	for(i = 0; text[i] != '#' && text[i] != '\n'; i++)
	{
		if((isspace(text[i]) && !isspace(text[i + 1])) || text[i + 1] == '#' || text[i + 1] == '\n')
		{
			words++;
		}
	}

	printf("\nThere are %d words.\n", words);
	
	return 0;
}
