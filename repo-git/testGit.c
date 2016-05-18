#include <stdio.h>
#include <stdlib.h>

// script codé rapidement  

int main(int argc, char ** argv[])
{
	if(argc !=2)
	{
		printf("usage: %s nombre \n",argv[0]);	
		return -1;
	}
	sleep(int(argv[1]));

	printf("pause de %i secondes \n", argv[1]);
	return 0;	
}

