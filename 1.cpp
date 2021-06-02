#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>

int main () {
	setlocale(LC_ALL,"portuguese");
	int vet[100];
	int numeros, repetidos;
	 
	srand(time(NULL));
	
	for(int i = 0; i < 100; i++){
		vet[i] = (rand() % 10) + 1;
	}
	
	printf("Digite o número que deseja verificar: ");
	scanf("%i", &numeros);
	
	for(int i = 0; i < 100; i++){
		if(numeros == vet[i]){
			repetidos++;
		}
	}

	printf("\n");
	printf("O número %i se repete %iº vezes no vetor.\n", numeros, repetidos);

return 0;
}
