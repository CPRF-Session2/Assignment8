#include <stdio.h>

int main()
{
	FILE *inFile;

	char x[30];

	int i, counter = 1;
	
	inFile = fopen("text.txt", "r");

	for (i=0; i<100; i++)
	{
	fscanf(inFile, "%s", x);
	
	while (fscanf(inFile, "%s", x) == 1)
	{

		counter ++;
	}
	}
	fclose(inFile);
	
	printf("There are %d words in your text file\n", counter);


}
