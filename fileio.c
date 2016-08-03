/*Can Parlar - Reads a file that has floats prints their average and squares of the numbers */
#include <stdio.h>

int main() {
	float a,b,c,d,e,f;
	FILE *ptr = fopen("floats.txt","r");
	FILE *ptr2 = fopen("output.txt", "w");
	fscanf(ptr,"%f%f%f%f%f",&a,&b,&c,&d,&e);
	f = (a+b+c+d+e)/5;
	a*=a; b*=b; c*=c; d*=d; e*=e;
	fprintf(ptr2,"The average of the numbers is: %.1f\n", f);
	fprintf(ptr2,"Squares:\n%.1f\n%.1f\n%.1f\n%.1f\n%.1f\n",a,b,c,d,e);
	printf("The average of the numbers is: %.1f\n", f);
	printf("Squares:\n%.1f\n%.1f\n%.1f\n%.1f\n%.1f\n",a,b,c,d,e);
	
	fclose(ptr2);
	fclose(ptr);
	return 0;
}
