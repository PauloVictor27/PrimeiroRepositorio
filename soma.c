#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int numero1;
	int numero2;
	int soma;
	
	printf("Digite o primeiro numero: " );
	scanf("%i",&numero1);
	printf("Digite o segundo numero: ");
	scanf("%i", &numero2);
	
	soma = numero1 + numero2;
	printf("A soma dos numeros eh: %i", soma);
	
	return 0;
	}
