#include <stdio.h>

int main(){
	int TamanhoString(char string[]);
	int num;
	char stringusuario[20];
	printf("Digite uma string:");
	scanf("%s", stringusuario);
	
	
	TamanhoString(stringusuario);
	num = TamanhoString(stringusuario);
	
	printf("A string %s possui %i caracteres:\n",stringusuario,num);
	
	return 0;
}

int TamanhoString(char string[]){
	int caracteres = 0;
	
	while(string[caracteres] != '\0'){
		caracteres++;
	}
	caracteres++;	
	return caracteres;
}
