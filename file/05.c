#include <stdio.h>

int main(){
	
	char  x[100];
	
	fgets(x, 100 , stdin);
	
	printf("%s\n",x);
	
	freopen("copia.txt", "r", stdin);
	
	fgets(x, 100 , stdin);
	
	
	fprintf("%s\n",x);
		
	
	return 0;
}
