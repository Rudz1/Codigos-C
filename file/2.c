#include <stdio.h>

int main(){
	
	FILE *file;
	file = fopen("arquivo.txt", "r");
	
	if(file == NULL){
		printf("Arquivo nao encontrado;");
		exit(0);
	}
	
	/*int x,y,z;
	
	fscanf(file,"%i %i %i", &x, &y , &z);
	
	printf("%i %i %i", x,y,z);
	
	*/
	char texto[50];
	
	while(fgets(texto , 50 , file) != NULL){
		printf("%s", texto);
			}
	
	fclose(file);
	return 0;
}
