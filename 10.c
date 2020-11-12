#include <stdio.h>

struct horario{
	int x;
	int y;
	int z;
};

int main(){
	
	struct horario func(struct horario n);
	
	
	struct horario agora;
	agora.x = 10;
	agora.y = 15;
	agora.z = 20;
	
	struct horario depois;
	depois = func(agora);
	
	printf("%i:%i:%i\n",depois.x,depois.y,depois.z);
	
	
	return 0;
}

struct horario func(struct horario n){
	
	printf("%i:%i:%i\n",n.x,n.y,n.z);
	
	n.x = 20;
	n.y = 15;
	n.z = 10;
	
	return n;
}
