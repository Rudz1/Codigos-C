#include <stdio.h>

int main(){
	
	char x[100];
	
	FILE *file = fopen("copia.txt", "r");
	
	int i = 0;
	while((x[i] = fgetc(file)) != EOF){
		++i;
	}
		
	printf("%s",x);	
	return 0;
}
