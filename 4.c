#include <stdio.h>
float soma(float num1, float num2);

int main(){
	
	float a,b,adicao;
	printf("Digite 2 valores: ");
	scanf("%f %f",&a,&b);
	
	adicao = soma(a,b);
	
	printf("Resusltado:%f\n",adicao);
	
	
	system("pause");
	return 0;
}

float soma(float num1, float num2){
	
	float conversao(float x);
	if(num1 < 0){
		num1 = conversao(num1);
	}if(num2 < 0){
		num2 = conversao(num2);
	}
	return num1 + num2;
}
float conversao(float x){
	
	return x *= -1;
}
