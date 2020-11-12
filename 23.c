#include <stdio.h>

int main(){
	
	int Somarvetores(int vet[], int x);
	int vet1[5] = {5,5,5,80,5};
	
	printf("A soma dos menbros do vetor e: %i",Somarvetores(vet1,5));
	
	
	
	return 0;
}
int Somarvetores(int vet[], int x){
	
	int soma = 0;
	int *ponteiro;
	int *const finalvetor = vet + x;
	
	for(ponteiro = vet;ponteiro < finalvetor;ponteiro++){
		soma = soma + *ponteiro;
	}
	
	
	return soma;
	
	
}
