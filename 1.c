#include <stdio.h>

int global = 4;

int main(){
	
	void func();
	
	
	
	printf("%i\n",global);
	func();	
	func();	
	func();	
	func();	
	func();	
	
	
	
	
	return 0;
}


void func(){
	//variavel local automatica
	int variavel = 2;
	variavel *= 2;
	printf("%i\n",variavel);
	//variavel local statica
	static int variavell =2 ;
	variavell *= 2;
	printf("%i\n",variavell);
	//variavel global delarado no topo
	global++;
	printf("%i\n",global);
	
}
