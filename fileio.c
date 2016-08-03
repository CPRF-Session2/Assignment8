#include <stdio.h>
#include <stdlib.h>
/* reads numbers from a seperate file, and finds their average and squares them.*/
int main(){
	FILE *filein=fopen("input.txt","r");
	FILE *fileout=fopen("output.txt","w");	
	float avg;
	float sq;
	fscanf(filein,"%f",&sq);
	for(int x=0;x<=4;x++){
		avg=avg+sq;
		fprintf(fileout,"%f",sq,(sq*sq));
		fscanf(filein,"%f",&sq);}

	avg=avg/5;
	fprintf(fileout,"\nAverage of the numbers is %f",avg);
	fclose(filein);
	fclose(fileout);
	return 0;}

