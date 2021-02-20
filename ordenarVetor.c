#include <stdio.h>

int main(){

	int vet[10] = {1,7,2,3,5,4,9,8,6,10};
	int i;
	int flag;
	int aux;
	int j;
	
	j = 1;
	
	do{
	
	flag = 0;
	
	for(i=0;i<9;i++){
		
		if(vet[i] > vet[i+1]){ //Fora de Ordem
		
		aux = vet[i];
		vet[i] = vet[i+1];
		vet[i+1] = aux;
		flag = 1; //Fez uma Troca
		
		}
		
	}
		printf("\nInteracao %i : ", j++);
		for (i=0;i<=9;i++){ //Imprime o Vetor
	
			printf("%i ", vet[i]);
	
	}
	
		} while (flag == 1);

}
