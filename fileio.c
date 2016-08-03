#include <stdio.h>

int main(){
FILE *f;
double x, y, z, w, a, b, c, d, avg;

f = fopen("inputfile.txt", "r");

fscanf(f, "%lf %lf %lf %lf", &x, &y, &z, &w);		/*scanning in the four floating points*/
a = x * x;	/*squaring the floating points*/
b = y * y;
c = z * z;
d = w * w;
avg = (x+ y + z + w) / 4; /*finding the average of the floating points*/
fclose(f);
FILE *outFile = fopen("avgandsq.txt", "w");  
fprintf(outFile, "Square root of first number: %lf\nSecond number: %lf\nThird Number: %f\nFourth number: %lf\nAverage of original numbers:%lf\n", a, b, c, d, avg);
fclose(outFile);
return 0;
}

