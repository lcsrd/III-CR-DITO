#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"portuguese");
	int vet[10], i, menor, maior;
	
	for(i = 0; i < 10; i++){
		scanf("%d", &vet[i]);
	}
	
	menor = vet[0];
	maior = vet[0];
	
	for(i = 0; i < 10; i++){
		if(vet[i] > maior){
			maior = vet[i];
		}
		if(vet[i] < menor){
			menor = vet[1];
		}
	}
	
	printf("\nMaior número: %d", maior);
	printf("\n");
	printf("Menor número: %d", menor);
		
return 0;
}
