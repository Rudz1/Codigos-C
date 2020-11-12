#include <stdio.h>

void func(int x, int vet[]);

int main(){
	
	int vet[3] ={10,5,5};
	int x = 5;
	
	func(x, vet);
	
	printf("\n");
	
	printf("Valor de x na funcao principal:%i\n",x);
	printf("Valor do vet na funcao principal:%i\n",vet[1]);
	
	
	
	
	return 0;
}

void func(int x, int vet[]){
	
	x = x + 25;
	vet[2] = 40;
	
	printf("Valor de x na funcao void:%i\n",x);
	printf("Valor do vet na funcao void:%i\n",vet[2]);
	
	
	
}
