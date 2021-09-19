#include<stdio.h>
#include<math.h>

int i, n1, n2, vetorBinario1[8], vetorBinario2[8], vetorResultado[8], descimal1, descimal2, resultado;
char operador;

void passandoParaVetor(int numero1, int numero2){
	int divisao=10000000;
	for(i=0; i<8; i++){
		vetorBinario1[i] = ((numero1 / divisao) % 10);
		vetorBinario2[i] = ((numero2 / divisao) % 10);
		divisao /= 10;
	}
}

void passandoParaDecimal(int vet1[], int vet2[]){
	int controle = 0;
	for(i=7; i>=0; i--){
		descimal1 += pow(2, controle) * vet1[i];
		descimal2 += pow(2, controle) * vet2[i];
		controle++;
	}
}

void resultadoBinario(int res){
	for(i=7; i>0; i--){
		vetorResultado[i] = res % 2;
		res /= 2;
	}
	vetorResultado[0] = res / 2;
}

main(){
	scanf("%c", &operador);
	scanf("%d", &n1);
	scanf("%d", &n2);
	printf("\n");
	passandoParaVetor(n1, n2);
	passandoParaDecimal(vetorBinario1, vetorBinario2);
	switch(operador){
		
		case '+':
			resultado = descimal1 + descimal2;
			resultadoBinario(resultado);
			for(i=0; i<8; i++){
				printf("%d", vetorResultado[i]);
			}
			break;
		
		case '-':
			resultado = descimal1 - descimal2;
			resultadoBinario(resultado);
			for(i=0; i<8; i++){
				printf("%d", vetorResultado[i]);
			}
			break;
		
		case '*':
			resultado = descimal1 * descimal2;
			resultadoBinario(resultado);
			for(i=0; i<8; i++){
				printf("%d", vetorResultado[i]);
			}
			break;
		
		case '/':
			resultado = descimal1 / descimal2;
			resultadoBinario(resultado);
			for(i=0; i<8; i++){
				printf("%d", vetorResultado[i]);
			}
			break;
		
		case '%':
			resultado = descimal1 % descimal2;
			resultadoBinario(resultado);
			for(i=0; i<8; i++){
				printf("%d", vetorResultado[i]);
			}
			break;
	}
}
