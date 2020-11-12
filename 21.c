#include <stdio.h>

struct lista{
	int valor;
	struct list *proximo;
};

int main(){
	
	struct lista *procurarvalor(struct lista *Plista, int valor);
	
	struct lista m1, m2, m3, m4, m5;
	struct lista *resultado,*gancho = &m1;
		
	m1.valor = 1;
	m2.valor = 2;
	m3.valor = 3;
	m4.valor = 4;
	m5.valor = 5;
	
	m1.proximo = &m2;
	m2.proximo = &m3;
	m3.proximo = &m4;
	m4.proximo = &m5;
	m5.proximo = 0;
	
	int valor;
	printf("Digite um valor:");
	scanf("%i",&valor);
	
	resultado = procurarvalor(gancho,valor);
	
	if(resultado == 0){
		printf("Resultado nao encontrado:\n");
	}else{
		printf("Valor %i encontrado:\n",resultado->valor);
	}
	
	
	return 0;
}

struct lista *procurarvalor(struct lista *Plista, int valor){
	
	while(Plista != 0){
		if(Plista->valor == valor){
			return Plista;
		}else{
			Plista = Plista->proximo;
		}
		
	}
	
	return 0;
}
