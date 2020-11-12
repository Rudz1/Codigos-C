#include <stdio.h>

#define PI 3.14123
#define AREA_DO_CIRCULO(raio) raio * raio * PI
#define MAIOR(y, z) y > z ? y : z
#define E_MINUSCULO(char) char >= 'a' && char <= 'z'

int main(){
	
	float x;
	printf("Digite o valor do raio:");
	scanf("%f", &x);
	printf("%f\n", AREA_DO_CIRCULO(x));
	
	char g = 'A';
	
	if(E_MINUSCULO(g)){
		printf("E uma letra munuscula\n");
	}else{
		printf("Nao e uma letra minuscula:\n");
			}
			printf("%i\n", MAIOR(100 ,50));
	
	return 0;
}
