/* Jared Wasserman -- wordcount.c */
/* This program takes a text file and prints to the screen the number of words in the file. The program will stop reading when it find ######## anywhere in the text */

#include <stdio.h>
#include <string.h>

/*Checks for 8 consecutive # (indicating to end reading the file)*/
int checkForEnding(int c, char line[]){
	int b;
   	int count=0;

   	for(b=c;b<(c+8);b++){
	   	if(line[b]=='#'){
	   		count++;
	   	}else{
	   		b=c+8;
	   	}
   	}

   	if(count==8){
   		return 1;
   	}else{
   		return 0;
   	}
}


int main(){
	int wordCount=0;

	FILE *inFile = fopen("text.txt","r");
	int i = 0;

	char line[200];
	fgets(line,200,inFile);

	line[strlen(line)-1]='\0';

	int c;
	int keepReading=1;

	/*Loop for every line of file*/
	while(keepReading){

		/*Iterates through the line*/
	   	for(c=0;c<strlen(line);c++){

	   		/*If it finds #. Checks for 8 and if so ends the reading.*/
	   		if(line[c]=='#'){
	   			if(checkForEnding(c,line)){
	   				keepReading=0;
	   			}
	   		}

	   		if(!keepReading){
	   			break;
	   		}

	   		/*Checks for whitespace. Continues if it finds whitespace.*/
	   		if(line[c]==' '){
	   			continue;
	   		}else{ /*If it doesnot find whitespace. Icrements the counter to where there is whitespace and also checks for ######## to end the program.*/
	   			int a=c;
	   			while(line[a]!=' '){
	   				if(line[a]=='#'){
	   					if(checkForEnding(a,line)){
	   						keepReading=0;
	   						break;
	   					}else{
	   						a++;
	   					}
	   				}else{
	   					a++;
	   				}
	   			}
	   			/*Adds to wordcount and then continues the next iteration of the forloop where at the end of the word.*/
	   			c=a-1;
	   			wordCount++;
	   			continue;
	   		}

	   	}

   		fgets(line,sizeof(line),inFile);
   		line[strlen(line)-1]='\0';
   		i++;
	}

	printf("\nThere were %d words in this file\n\n",wordCount);

   fclose(inFile);


return 0;
}
