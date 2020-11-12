#include <stdio.h>

void crescente(int vetor[], int x );

int main(){
	
	int vetor[10] = {30,40,60,50,100,70,50,90,40,30}; //{3,4,6,7,9,8,2,1,0,5};
	int i;
	
	crescente(vetor,10);
	printf("Ordem crescente:");
	for(i = 0; i < 10; i++){
		printf("%i ",vetor[i]);
	}
	
	
	
	
	return 0;
}

void crescente(int vetor[], int x ){
	
	int i,j,temporal;
	
	for(i = 0; i < x; i++){
		for(j = i + 1; j < x; j++){
			if(vetor[i] > vetor[j]){
				temporal = vetor[i];
				vetor[i] = vetor[j];
				vetor[j] = temporal;
				
							}
			
		}
	}

		
	
	
	
	
	
	
}
