//Ashank Kumar, reads a file and prints the words in it
#include <stdio.h>
#include <string.h>

int main()
{
	FILE *fileVar = fopen("text.txt", "r");
	char c;
	int counter = 0;
	int valid = 1;

	start:	
	while((c = fgetc(fileVar)) != '#')
	{
		if(c == ' ')
		{
			counter++;
			while(c == ' ')
			{
				c =fgetc(fileVar);
			}
		}
	}
	
	fclose(fileVar);
	
	printf("%d\n",counter);

	return 0;
}
