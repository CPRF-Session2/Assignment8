#include <stdio.h>
#include <string.h>
/* counts the words in a file */
int main(){
	FILE *filein=fopen("text.txt","r");
	char words;
	int c=0;
	while (words!='#'){
		if(words!=' '){
			words=fgetc(filein);}
		else {
			c++;}}
	printf("%d\n",c);
	fclose(filein);
	return 0;} 
