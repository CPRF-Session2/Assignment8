#include <stdio.h>
#include <string.h>
int main(){
FILE *f; 
char st[50];
int i, count = 0, ret;
f = fopen("text.txt", "r");

for(i = 1; i <= 20; i++){      /*the fscanf finds all of the separate strings without spaces*/
	fscanf(f, "%s", st);
	ret = strcmp(st, "########");  /*return value will be 0 if the string is equal to #*/  
	printf("%d", ret);
	if (ret == 0)   	/*if there is ####, the return of the strcmp will be 0, so the for loop will break*/	
		break;
	count++;
	}
printf("The number of words in your file is %d", count);
return 0;
}
