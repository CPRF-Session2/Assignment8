#include<stdio.h>

int main()
{
	FILE *inFile, *outfile;
	
	int i, h;

	float x, q, z, y;

	inFile = fopen("input.txt", "r");

	outfile = fopen("output.txt", "w");

	fprintf(outfile, "These are the squares of the numbers\n");
	
	for (i=0; i<100; i++)
	{
		h = fscanf(inFile, "%f", &x);

		if (h==-1)
			break;

		z = z+x;

		q = z/(float) (i + 1);

		y=x*x;

		fprintf(outfile, "%f\n", y);
	

	}
        fprintf(outfile, "average is %f\n", q);

	fclose(inFile);
	fclose(outfile);

}
