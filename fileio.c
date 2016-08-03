#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	FILE *inFile = fopen("input.txt", "r");/*opens input FILE*/
	FILE *outFile = fopen("output.txt", "w");/*opens output FILE*/
	float in;
	float sum = 0;/*counts sum*/
	int totalIn = 0;/*counts number of inputs*/
	fscanf(inFile, "%f", &in);/*gets first input*/
	while(in!=0){
		sum+=in;
		totalIn++;/*increments input amount*/
		fprintf(outFile, "%f\n", in*in);
		fscanf(inFile, "%f", &in);
	}
	sum=sum/totalIn;/*computes average*/
	fprintf(outFile, "\nAverage = %.2f", sum);
	fclose(inFile);/*closes input FILE*/
	fclose(outFile);/*closes output FILE*/	
	
	return 0;
}
