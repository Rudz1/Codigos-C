#include <stdio.h>

int main(){
	
	struct estrutura{
		int x;
		int y;
		int z;
	};
	
	struct estrutura vet[3] = {{1,2,3},{4,5,6},{7,8,9}};
	int i;
	for(i = 0;i < 3; i++){
		printf("%i:%i:%i\n",vet[i].x,vet[i].y,vet[i].z);
	}
	
	
	
	
	return 0;
}

