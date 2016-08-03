/*Rebecca Hale Assignment 8 Part 1*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*size = length of a*/
char contains8(char a1[], int size1){
	int count1=0;
	for(int i = 0; i<size1; i++){
		if(a1[i]=='#'){
			count1++;
		}
	}
	if(count1==8){
		return 't';/*is terminator*/
	}
	return 'f';/*is not terminator*/
}
/*size = length of a*/
int numOfWords(char a[], int size){
	int i = 0;
	int lastWhite=-1;
	while(i<size && isspace(a[i])==0)
		i++;/*finds first whitespace occurrence*/
	int count = 1;
	lastWhite=i;/*sets last white space*/
	if(i==size-1)
		return count;/*returns 1 if no whitespace is found until thend of the line*/
	if(i==0)
		count--;/*makes sure first space is not whitespace*/
	i++;/*increments i to second letter*/
	while(i<size){
		if(isspace(a[i])){
			count++;
			if(lastWhite==i-1){
				if(i!=size-1)
					count--;/*checks for double whitespace*/
			}
		}
		lastWhite=i;/*sets last whitespace*/
		i++;
	}
	
	return count;
}/*return number of words in line given*/

int main(){
	FILE *inFile = fopen("text.txt", "r");
	char line[100];
	fgets(line, sizeof(line), inFile);/*gets first line of text*/
	int countWords = 0;
	while(contains8(line, strlen(line))=='f'){
		countWords+=numOfWords(line, strlen(line));/*adds number of words in new line*/
		fgets(line, sizeof(line), inFile);
	}
	countWords+=numOfWords(line, strlen(line));/*adds words of last 
line*/
	int i = 0;
	while(line[i]!='#')
		i++;
	i--;/*index of last char before #*/
	if(isspace(line[i]))
		countWords--;/*excludes terminator if space is provided before*/
	printf("There are %d words in the file provided.\n", countWords);
	
	return 0;
}
