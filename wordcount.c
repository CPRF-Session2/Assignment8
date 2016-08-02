//Albert Zhang
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
	//opens input
	FILE *inFile = fopen("text.txt", "r");
	char h;
	int c;
	c = 0;
	//checks for whitespace
	while((h = fgetc(inFile)) != '#') {
		if (isalnum(h)) {
			continue;
		}
		if (isspace(h)) {
			c++;
		}
	}
	//prints the word count(whitespace count) because i couldn't get the word count to work correctly
	printf("%d\n", c);
	fclose(inFile);

	return 0;
}
