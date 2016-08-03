/*Mariposa Lee, reads input.txt, prints average and squares. A friend helped me through this in the morning.*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
float func(float num) {
	float q;
	q= (num*=num);
	return q;
	}

int main () {
float out[5];
FILE *inp = fopen("input.txt", "r");
char txt[50];
int a;
for(a=0; a<5; a++) {     /*Switch statement to turn inputs into valid values*/
	switch (a) {
		case 1:
		out[0]=atof(txt);
		break;

		case 2:
		out[1]=atof(txt);
		break;
		
		case 3:
		out[2]=atof(txt);
		break;

		case 4:
		out[3]=atof(txt);
		break;} 
	fgets(txt,50,inp); } /*Actually gets the inputs here*/
	
FILE *inw = fopen("output.txt", "w");
float average;
average=((out[0]+out[1]+out[2]+out[3])/4); 
fprintf(inw, "The average of the numbers are %.3f.\n", average);
float q,w,e,r;
q= out[0];
w= out[1];
e= out[2];
r= out[3];
fprintf(inw, "%.3f squared is %.3f.\n", q, func(q));
fprintf(inw, "%.3f squared is %.3f.\n", w, func(w));
fprintf(inw, "%.3f squared is %.3f.\n", e, func(e));
fprintf(inw, "%.3f squared is %.3f.\n", r, func(r));

fclose(inw);
fclose(inp);
return 0;
}

