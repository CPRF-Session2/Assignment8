//Albert Zhang
#include <stdio.h>
#include <stdlib.h>
int main () {
	//writes into output file
	//reads from input file
	FILE *outFile = fopen("output.txt", "w");
	FILE *inFile = fopen("input.txt", "r");
	float arr[100];
	int c;
	for (c = 0; c <= 3; c++){
		fscanf(inFile, "%f", &arr[c]);
	}
	for (c = 0; c <=3; c++) {
		printf("%.2f \n", arr[c]);
	}
	//squares each from input, also averages
	float square[3];
	square[0] = arr[0] * arr[0];
	square[1] = arr[1] * arr[1];
	square[2] = arr[2] * arr[2];
	square[3] = arr[3] * arr[3];
	float avg;
	avg = ((arr[0] + arr[1] + arr[2] + arr[3])/4);
	//puts it all into the output
	for (c = 0; c <= 3; c++) {
		fprintf(outFile, "%.2f \n", square[c]);
	}
	fprintf(outFile, "%.2f\n", avg);
	fclose(inFile);
	fclose(outFile);
	return 0;
}
