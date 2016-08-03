#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	FILE *inFile =  fopen("floats.txt", "r");
	int a;
	float arr[6];
	//fscanf(inFile, "%d", &a);
	//printf("%d\n", a);
	for(int i = 0;i<5;i++)
	{
		fscanf(inFile, "%f", &arr[i]);
		//printf("%d\n", arr[i]);
	}
	
	float average;
	float sum[6];

	for(int i = 0;i<5;i++)
	{
		average+=arr[i];
	}
	average/=5;

	
	for(int i = 0;i<5;i++)
	{
		sum[i] = arr[i]*arr[i];
	}
	


	fclose(inFile);
	
	FILE *outfile = fopen("output.txt", "w");

	fprintf(outfile, "The average is %f\n", average);

	for(int i = 0;i<5;i++)
	{
		fprintf(outfile, "%f\n", sum[i]);
	
	}


	return 0;
}
