#include <stdio.h>
#include <ctype.h>
#include <math.h> 

int main (){

	FILE *input;
	input = fopen ("input.txt", "r");
	FILE *output;
	output = fopen ("output.txt", "w");
	float arr[10];
	int i=-1;
	do { 
		i++;
		fscanf(input, "%f", &arr[i]);
		if (arr[i]==0)
			break; 
		printf("%.2f squared is %.2f\n", arr[i], pow(arr[i], 2));
		fprintf(output, "%.2f squared is %.2f\n", arr[i], pow(arr[i], 2));
	}
	while (arr[i]!=0);
	int x = i-1;
	for (i=1;i<x; i++){
		arr[i]=arr[i-1]+arr[i];
	}
	float avg = arr[i-1]/ (sizeof(arr)/sizeof(int));
	printf("The average is %.2f\n", avg);
	fprintf(output, "The average is %.2f\n", avg);
	fclose (input);
	fclose (output);
	return 0;
}
