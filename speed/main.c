#include<stdio.h>
#include<time.h>
#include<unistd.h>
#include<stdlib.h>

double speed(int nSize)
	{
	double duration = 0; 

	clock_t start = clock(); 
	size_t a;	
	for(size_t i = 0; i < nSize; i++)
		{
			a = i;
		}

	clock_t end = clock();

	duration += (double)(end - start)/CLOCKS_PER_SEC;
	return duration * 1000;

    }

int main(int argc , char* argv[])
	{
	size_t nSample = 500;

	FILE* fp;

	fp = fopen("c.csv","w");

    for(size_t x = 0; x < nSample; x++) fprintf(fp,"%.4f\n",speed(1000000));

	fclose(fp);

	return 0;

	}



