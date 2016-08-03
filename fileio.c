//reads numbers from a file, finds their average and squares them
#include <stdio.h>

int main()
{
	FILE *fileVar = fopen("input.txt", "r");
	FILE *fileVar2 = fopen("output.txt", "w");

	double avg = 0;
	double square;

	fscanf(fileVar, "%lf", &square);

	for(int i = 1; i < 6; i++)
	{
		avg = avg +square;
		//printf("avg:%lf\n",avg);
		//square = square * square;
		//printf("Square:%lf\n", (square*square));
		fprintf(fileVar2, "%lf squared:%lf\n",square, (square*square));
		fscanf(fileVar, "%lf", &square);
	}

	avg = avg / 5;

	fprintf(fileVar2, "The average is:%lf", avg);

	fclose(fileVar);
	fclose(fileVar2);

	return 0;
}
