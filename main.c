/*Test if a memory is really allocated */

#include<stdio.h>
#include<stdlib.h>

void interrupt(char y)
	{
		char x;
		x = getchar();	
		while (x != y)
			{
				printf("press %c to continue \n",y);
				x = getchar();
			}

	}


int main(int argc, char* argv[])
	{
		int nsize = 0;
		printf("This will check memory allocation using malloc \n");
		printf("Take note of the memory usage of this program \n");
		printf("How many integers (4 bytes) do you want to allocate? \n");
		scanf("%d",&nsize);
		printf("Allocating %ld bytes  of memory \n", nsize * sizeof(int));
		int* ptr = (int*)malloc(nsize * sizeof(int));
		if(ptr == NULL)
			{printf("No avail mem.\n"); exit(0);};

		printf("Check the increase in memory usage of this program \n");	
		printf("Now, lets put 1's as data inside of it \n");
		interrupt('y');		

		for(int z = 0; z < nsize;z++)
				{
					ptr[z] = 1;
				}

		printf("Now, lets free the memory\n");

		interrupt('t');
		free(ptr);
		ptr = NULL;

		printf("Memory Released.\n");
		
		printf("Done!! Press 'v'to exit program. \n");
		interrupt('v');	
		return 0;

	}

