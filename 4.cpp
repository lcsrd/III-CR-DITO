#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main () {
	setlocale(LC_ALL,"portuguese");
	
	int vetor[10];
	int opcao, posicao, novocad;
	
	for(int i = 0; i < 10; i++){
		vetor[i] = 0;
	}
	
	do {
		
	posicao = 0;
	
	printf("\Selecione a opção desejada:\n 1 - Cadrasto\n 2 - Leitura\n 3 - Edição\n 4 - Apagar\n 5 - Sair\n ");
	printf("\n");	
	scanf("%i", &opcao);
	
	system("cls");
	
	switch(opcao){
		
		case 1: printf("\nCADRASTO\nDigite a posição no vetor: ");
			scanf("%i", &posicao);
				
			if(vetor[posicao] == 0){
				printf("\nDigite o novo cadastro: ");
				scanf("%i", &vetor[posicao]);
				printf("\n");
			}else{
				printf("\nA posição digitada já tem um cadastro!\n");
			}
				
			system("pause");
			break;	
				
		case 2: printf("\nLEITURA\nDigite a posição no vetor: ");
			scanf("%i", &posicao);	
			
			printf("\nO cadastro da posição %iº do vetor é: %i\n", posicao, vetor[posicao]);
			printf("\n");
			system("pause");
			printf("\n");
			break;
				
		case 3: printf("\nEDIÇÃO\nDigite a posição no vetor: ");
			scanf("%i", &posicao);
				
			printf("\nDigite um novo cadastro para posição %iº do vetor: ", posicao);
			scanf("%i", &vetor[posicao]);
			printf("\n");
			system("pause");
			break;
				
		case 4: printf("\nAPAGAR\nDigite a posição no vetor: ");
			scanf("%i", &posicao);
				
			vetor[posicao] = 0;
			
			printf("\nO cadastro da posição %iº do vetor foi apagada/zerada!\n", posicao);
			printf("\n");
			system("pause");
			break;
				
		case 5: printf("O foi programa finalizado.\n");
			printf("\n");
			system("pause");
			break;
	}
	
	system("cls");

	}while(opcao != 5);
	
return 0;	
}
