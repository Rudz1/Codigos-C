#include <stdio.h>
#include <stdbool.h>

struct dicionario{
	char palavra[20];
	char definicao[50];
};
int main(){
	
	int procurarpalavras(const struct dicionario lingua[] , const char procurar[] , const int numpalavras);
	
	
	char palavra [20] = {'\0'};
	int resultadopesquisa;
	
	const struct dicionario paulera[5] = 
	{{"ironmaiden" , "Run to the hills-The trooper-Hellowed be thy name"},
	 {"hellowen" , "I want out-Eagle fly free"},	
	 {"raphysod" , "Emerald sword-Unholy warcry"}, 
	 {"angra" , "Carry on-bleeding heart-Nova era"},
	 {"avegendsevenfold" , "Nightmare-Dear god-so far away"}};
	 
	 printf("Digite uma palavra:");
	 scanf("%s", palavra);
	 
	 resultadopesquisa = procurarpalavras(paulera, palavra, 5);
	 
	 if(resultadopesquisa != -1){
	 	printf("%s\n" ,paulera[resultadopesquisa].definicao);
	 }else{
	 	printf("Palavra nao encontrada:");
	 }
	
	return 0;
}

bool compararPalavras(const char palavra1[] , const char palavra2[]){
	int i = 0;
	
	while(palavra1[i] == palavra2[i] && palavra1[i] != '\0' && palavra2[i] != '\0'){
			i++;
	}
	if(palavra1[i] == '\0' && palavra2[i] == '\0'){
		return true;
	}else{
		return false;
	}
}

int procurarpalavras(const struct dicionario lingua[] , const char procurar[] , const int numpalavras){
	
	bool compararPalavras(const char palavra1[] , const char palavra2[]);
	
	int i = 0;
	while( i < numpalavras){
		if(compararPalavras(procurar, lingua[i].palavra)){
			return i;
		}else{
			i++;
		}
	}
	return -1;
}

