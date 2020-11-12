#include <stdio.h>

int main(){

	struct lista{
		int valor;
		struct lista *proximo;
	};
	
	struct lista m1,m2,m3,m4;
	struct lista *gancho = &m1;
	
	m1.valor = 10;
	m2.valor = 20;
	m3.valor = 30;
	m4.valor = 40;
	
	m1.proximo = &m2;
	m2.proximo = &m3;
	m3.proximo = &m4;
	m4.proximo = 0;
	
	while(gancho != 0){
		printf("%i\n",gancho->valor);
		gancho = gancho->proximo;
	}
	
	
	
	
	
	return 0;
}
