#include <stdio.h>

int main(){
	
	float projetos[10];
	int i;
	struct boleto{
		int numero;
		float valor;
		char tipo;
	}boleto1;
	
	for(i = 0; i < 10; i++){
		projetos[i] = 0.0;
	}
	
	printf("\nDigite o codigo do projeto: ");
	scanf("%i",&boleto1.numero);
	
	while(boleto1.numero != -1){
		printf("\nDigite o valor: ");
		scanf("%f",&boleto1.valor);
		printf("\nDigite o tipo de transaçao(R ou D): ");
		getchar();
		scanf("%c",&boleto1.tipo);
	
	if(boleto1.tipo == 'R' || boleto1.tipo == 'r'){
		projetos[boleto1.numero] = projetos[boleto1.numero] + boleto1.valor;
	}else{
		if(boleto1.tipo == 'D' || boleto1.tipo == 'd'){
			projetos[boleto1.numero] = projetos[boleto1.numero] - boleto1.valor;
		}else{
			printf("\nTipo invalido:");
		}
	}
	printf("\n\nDigite o codigo do projeto: ");
	scanf("%i",&boleto1.numero);	
}
	for(i = 0; i < 10; i++){
		printf("\nSaldo do projeto: %i = %f",i,projetos[i]);
	}
	
	
	return 0;
}
