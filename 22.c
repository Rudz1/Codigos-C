#include <stdio.h>

int main(){
	
	int vet[3] = {1,2,3};
	
	int *ponte = &vet[0];
	
	*(ponte + 2) = 10;
	
	printf("%i\n", *ponte);
	
	ponte = &vet[1];
	printf("%i\n", *ponte);
		
	ponte = &vet[2];	
	printf("%i\n", *ponte);
	
	return 0;
}
