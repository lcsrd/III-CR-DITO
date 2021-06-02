#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"portuguese");
	int vetor[10];
	int numero, razao, a = 0;
	
	printf("Digite um número inicial: ");
	scanf("%d", &numero);
	
	printf("\nDigite um número para razão: ");
	scanf("%d", &razao);
	
	vetor[a] = numero;
	printf("\n");
	
	for(a = 0; a < 10; a++){
		vetor[a+1] = vetor[a] + razao;
	}
	
	printf("PA: ");
	
	for(a = 0; a < 10; a++){
		printf("%d ", vetor[a]);
	}
		
return 0;	
}
