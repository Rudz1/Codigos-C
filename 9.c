#include <stdio.h>

int main(){
	
	struct horario{
		int horas;
		int minutos;
		int segundos;
		char letra;
		double flotao
		
	};
	
	struct horario agora;
	
	agora.horas = 15;
	agora.minutos = 56;
	agora.segundos = 45;
	agora.letra = 'B';
	
	printf("Horario de agora:%i:%i:%i\n",agora.horas, agora.minutos, agora.segundos);
	
	struct horario depois;
	
	depois.horas = agora.horas + 2;
	depois.minutos = agora.minutos;
	depois.letra = agora.letra - 1;
	depois.flotao = (double) 8/9;
	
	printf("%i\n",depois.horas);
	printf("%i\n",depois.minutos);
	printf("%c\n",depois.letra);
	printf("%f\n",depois.flotao);
	
	
	return 0;
}
