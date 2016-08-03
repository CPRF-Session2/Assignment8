#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fileIn = fopen("fltin.txt", "r");
	float flt1;
	float flt2;
	float flt3;
	float flt4;
	float flt5;
	float fltavg;
	char flts[8];
	char *ptr;
	fgets(flts, sizeof(flts), fileIn);
	flt1 = strtod(flts, &ptr);
	fgets(flts, sizeof(flts), fileIn);
	flt2 = strtod(flts, &ptr);
	fgets(flts, sizeof(flts), fileIn);
	flt3 = strtod(flts, &ptr);
	fgets(flts, sizeof(flts), fileIn);
	flt4 = strtod(flts, &ptr);
	fgets(flts, sizeof(flts), fileIn);
	flt5 = strtod(flts, &ptr);
	fclose(fileIn);
	fltavg = (flt1 + flt2 + flt3 + flt4 + flt5) / 5;
	flt1 *= flt1;
	flt2 *= flt2;
	flt3 *= flt3;
	flt4 *= flt4;
	flt5 *= flt5;

	FILE *fileOut = fopen("fltout.txt", "w");
	fprintf(fileOut, "Squares: %g, %g, %g, %g, %g\nAverage:%g\n", flt1, flt2, flt3, flt4, flt5, fltavg);
	fclose(fileOut);

	return 0;
}