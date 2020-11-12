#include <stdio.h>

int main(){
	
	char nome[100];
	char caractere;
	int i = 0;
	
	printf("Digite seu nome completo:");
	do{
		caractere = getchar();
		nome[i] = caractere;
		i++;
	}while(caractere != '\n');
	
	nome[i - 0] = '\0';
	
	
	printf("%s\n",nome);
	
	return 0;
}
