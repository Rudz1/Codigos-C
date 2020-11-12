#include <stdio.h>

int main(){
	
	FILE *file;
	file = fopen("arquivo.txt", "a");
	if(file == NULL){
		printf("Aquivo nao encontrado:");
	}
	fprintf(file,"\n");
	fprintf(file,"New grau\n");
	
	fclose(file);
	return 0;
}
