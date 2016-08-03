//Matthew Kellerman - gets numbers from input file and finds the average and the squares the numbers. It then prints it to an output file
#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *input = fopen("input.txt","r");
	char in[100];
	float arr[6];
	fgets(in,sizeof(in),input);
	int i;


	for(i =0;i<6;i++){
		//puts the numbers from the input file into the array
			arr[i]= atof(in);
		fgets(in,100,input);
							}
//stores average and number squared
		arr[12] = (arr[0]+arr[1]+arr[2]+arr[3]+arr[4]+arr[5])/6;
		arr[6] = arr[0]*arr[0];
		arr[7] = arr[1]*arr[1];
		arr[8] = arr[2]*arr[2];
		arr[9]=arr[3]*arr[3];
		arr[10]=arr[4]*arr[4];
		arr[11]= arr[5]*arr[5];

		fclose(input);

		FILE *output = fopen("output.txt","w");
	//puts numbers squared and average into output file
		for(int i =6;i<13;i++){
															
			fprintf(output, "%0.2f\n",arr[i]);
		}
fclose(output);
return 0;
}
