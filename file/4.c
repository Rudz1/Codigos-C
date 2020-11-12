#include <stdio.h>

int main(){
	
	void CopiarConteudo(FILE *file1, FILE *file2);
	
	FILE *file1;
	file1 = fopen ("copiararquivos.txt", "r");
	if(file1 == NULL){ 
		printf("Arquivo nao encontrado");
	}
	
	FILE *file2;
	file2 = fopen ("copia.txt", "w");
	
	CopiarConteudo(file1,file2);
	
	
	
	fclose(file1);
	fclose(file2);
	return 0;
}

void CopiarConteudo(FILE *file1, FILE *file2){
	char leitor[100];
	
	while(fgets(leitor,100,file1) != NULL)
	
	fputs(leitor,file2);
	
	
}
