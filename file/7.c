#include <stdio.h>

int main(){
	
	char x[] = "coxinha";
	
	FILE *file =  fopen("copia.txt" , "w");
	
	int i = 0;
	while(x[i] != '\0'){
		putc(x[i], file);
		++i;
	}	
	
	return 0;
}
