#include <stdio.h>
int k, vet[1001], n, i, j, x=0;

void ordenar(){
	int qtd, aux, y;
	for(qtd=n; qtd>1; qtd--){
		for(y=0; y<qtd-1; y++){
			if((vet[y] == 0) || ((vet[y] > vet[y+1]) && (vet[y+1] != 0))){
				aux = vet[y];
				vet[y] = vet[y+1];
				vet[y+1] = aux;
			}
		}
	}
}

main(){
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d", &k);
		vet[i] = k;
		x++;
		for(j=0; j<n; j++){
			if((vet[j] == k) && (i != j)){
				vet[j] = 0;
				x--;
			}			
		}
	}

	ordenar();
		
	for(i=0; i<x; i++){
		printf("\n%d", vet[i]);
	}
}
