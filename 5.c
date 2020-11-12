#include <stdio.h>

int fatorial(int x);

int main(){
	
	int numero,resultado;
	
	printf("Digite um numero: ");
	scanf("%i",&numero);
	
	resultado = fatorial(numero);
	
	printf("Resultado do fatorial: %i\n",resultado);
	
	
	
	
	return 0;
}

int fatorial(int x){
	
	int resultado;
	
	if(x == 0){
		resultado = 1;
	}else{
		resultado = x *= fatorial(x - 1);
		
			}
	
	
	
	
	return resultado;
	
}
