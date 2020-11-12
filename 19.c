#include <stdio.h>

void Ponteirassocoms(int *ponta);

int main(){
	
	int pontada = 7;
	
	struct horario {
		int hora;
		int minuto;
		int segundo;
	}agora, *depois;
	
	depois = &agora;
	
	depois->hora = 10;
	depois->minuto = 20;
	depois->segundo = 30;
	
	printf("%i:%i:%i\n", agora.hora,agora.minuto,agora.segundo);
	
	void Ponteirassocoms(pontada);
	
	printf("Pontada:%i",pontada);
	
	
	return 0;
}
void Ponteirassocoms(int *ponta){
	
	ponta = ponta + 5;
	
}
