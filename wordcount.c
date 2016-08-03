/* Can Parlar - Counts the words in a file */

#include <stdio.h>

int main() {

	FILE *ptr = fopen("text.txt", "r");
	char text;
	int count = 0;
	do {
	text = fgetc(ptr);
		if (text == ' ') {
			count++;
		}
	} while (text != '#');
	printf("%d\n", count);
	fclose(ptr);
	return 0;
}
