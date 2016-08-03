/* Averages the five numbers found in the input file, and then squares each of the individual numbers. All of these values are then printed to the terminal. - Amanda Cuevas */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	float arr[6];
	float arr2[6];
	char in[100];
	int i;
	float avg;
	FILE *inFile = fopen("input.txt", "r");
	for(i=0;i<6;i++) {
		switch(i) {
			case 1:
			arr[0] = atof(in);
			break;
			case 2:
			arr[1] = atof(in);
			break;
			case 3:
			arr[2] = atof(in);
			break;
			case 4:
			arr[3] = atof(in);
			break;
			case 5:
			arr[4] = atof(in);
			break;
		} fgets(in,100,inFile);

	}

	avg = (arr[0] + arr[1] + arr[2] + arr[3] + arr[4])/5;

	FILE *outFile = fopen("output.txt", "w");

	fprintf(outFile,"Average: %.2f \n Squares of Input:", avg);

	arr2[0] = arr[0] * arr[0];
		fprintf(outFile, "\n%.2f\n", arr2[0]);
	arr2[1] = arr[1] * arr[1];
		fprintf(outFile, "%.2f\n", arr2[1]);
	arr2[2] = arr[2] * arr[2];
		fprintf(outFile, "%.2f\n", arr2[2]);
	arr2[3] = arr[3] * arr[3];
		fprintf(outFile, "%.2f\n", arr2[3]);
	arr2[4] = arr[4] * arr[4];
		fprintf(outFile, "%.2f\n", arr2[4]);

	fclose(inFile);
	fclose(outFile);

return 0;
}
