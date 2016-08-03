/*Jinoo Hong*/
/*Read floats from a .txt file and then output their average as well as squares in another .txt file*/
#include <stdio.h>
#include <stdlib.h>

int main () {
	FILE *inputfile = fopen("inputfile.txt","r");
	char inputfilearray[100];
	int i, total=0;
	fgets(inputfilearray,sizeof(inputfilearray),inputfile);
	float num,sq1,sq2,sq3,sq4,sq5;

	for (i=0;i<5;i++) {
		num = atoi(inputfilearray);
		total+=num;
		switch (i) {
			case 0:
				sq1=num*num;
				break;
			case 1:
				sq2=num*num;
				break;
			case 2:
				sq3=num*num;
				break;
			case 3:
				sq4=num*num;
				break;
			case 4:
				sq5=num*num;
				break;
		}
		fgets(inputfilearray,100,inputfile);
	}
	fclose(inputfile);
	float average=total/5;
	FILE *outputfile = fopen("outputfile.txt", "w");
	fprintf(outputfile, "Average: %f\nSquare of number 1: %f\nSquare of number 2: %f\nSquare of number 3: %f\nSquare of number 4: %f\nSquare of number 5: %f\n", average, sq1, sq2, sq3, sq4, sq5);
	fclose(outputfile);
	return 0;
}
