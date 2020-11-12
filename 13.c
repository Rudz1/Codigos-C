#include <stdio.h>

struct horarios{
	int horas;
	int minutos;
	int segundos;
};
void receberhorarios(struct horarios list[5]);
void printhorarios(struct horarios list[5]);

int main(){
	
	struct horarios listahorarios[5];
	
	receberhorarios(listahorarios);
	printhorarios(listahorarios);
	
	
	
	
	
	return 0;
}
void receberhorarios(struct horarios list[5]){
	int i;
	printf("Digite os 5 horarios: \n");
	for(i = 0; i < 5; i++){
		scanf("%i:%i:%i",&list[i].horas,&list[i].minutos,&list[i].segundos);
	}
	

}
void printhorarios(struct horarios list[5]){
	int i;
	for(i = 0; i < 5; i++){
		printf("Horario %i: %i:%i:%i \n",i + 1,list[i].horas,list[i].minutos,list[i].segundos);
	}
	
	
}
