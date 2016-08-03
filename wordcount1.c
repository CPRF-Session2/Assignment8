//Matthew Kellerman -prints how many words there are in text file
#include <stdio.h>
#include <stdlib.h>

int main()

{
FILE *text = fopen("text.txt","r");
char str;
int i =0;
//do while counts spaces
do
{
str = fgetc(text);
if(str == ' '){
	i++;
} 
} while(str != '#');

printf("%d\n",i);
fclose(text);
return 0;

}
