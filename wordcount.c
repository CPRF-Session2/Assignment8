#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
	char input[200];
	
	int Wcounter = 1;

	FILE *inFile = fopen("text.txt", "r");
	

	for(int i = 0;i<sizeof(input);i++)
	{
		fscanf(inFile, "%c", &input[i]);
	
	}

	for(int i = 0;i<sizeof(input);i++)
	{
		if(input[i] == ' ')
		{
			//printf("[%d]", input[i]);
			for(int x = 1;x<sizeof(input);x++)
			{
				if(input[i+x] == ' ')
				{
					Wcounter+=1;
					i = i+x-1;
					break;
				}
								
			}
			
		
		}

	}





	printf("%d\n", Wcounter);





	return 0;
}
