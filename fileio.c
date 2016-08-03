/* Jared Wasserman -- fileio.c */
/* This program reads floats from a file and then calculates the average and squares every float and prints these values into an output file.*/
#include <stdio.h>

int main(){

   /* Reading From File */
   FILE *inFile = fopen("floats.txt","r");
   int length;
   fscanf(inFile, "%d", &length);
   float arr[length];

   int i;
   float readValue;

   for(i=1;i<length+1;i++){
      fscanf(inFile, "%f", &readValue);
   	arr[i-1]=readValue;
   }

   fclose(inFile);

   /* Calculating Average */
   float total=0;
   for(i=0;i<length;i++){
     total += arr[i];
   }
   float average=(total/length);

   /* Writing To File */
   FILE *outFile = fopen("output.txt","w");
   fprintf(outFile,"The average of the %d floats is: %.2f\n\n",length,average);
   fprintf(outFile,"The squares of the floats are:\n");
   for(i=0;i<length;i++){
      fprintf(outFile,"\t%.2f^2 = %.2f\n",arr[i],(arr[i]*arr[i]));
   }

   fclose(outFile);

return 0;
}
