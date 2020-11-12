#include <stdio.h>

void matriz(int mat[][3]);

int main(){

	int mat[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	
	matriz(mat);	
	
	return 0;
}

void matriz(int mat[][3]){
	
	int i,j;
	
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			printf("%i ",mat[i][j]);
		}
		printf("\n");
	}
	
	
	
	
	
}
