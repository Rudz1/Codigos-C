#include <stdio.h>

int main(){
	
	FILE *file;
	file = fopen("arquivo.txt", "w");
	
	fprintf(file,"E agsadsadadorasdesada dfsdfdf fsdfdsfs sdfsfssfiote\n");
	fprintf(file,"grau da asda é briga da desgraca");
	fclose(file);
	
	
	
	
	return 0;
}
