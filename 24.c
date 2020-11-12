#include <stdio.h>

int main(){
	
	void Copiarstrings(char *copiarstring, char *colaraqui);
	char string[] = "pao com queijo";
	char string2[20];
	
	Copiarstrings(string,string2);
	printf("%s\n", string2);
	
	return 0;
}

void Copiarstrings(char *copiarstring, char *colaraqui){
	
	while(*copiarstring != '\0'){
		*colaraqui = *copiarstring;
		++colaraqui;
		++copiarstring;
	}
	*colaraqui = '\0';
	
}
