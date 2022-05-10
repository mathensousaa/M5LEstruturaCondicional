/* Escreva um programa que leia um número real do teclado e imprima se o número lido
é positivo ou não. */

#include <stdio.h>

void main() {
	float numero;
	printf("Insira um valor: ");
	scanf("%f", &numero);
	if (numero >= 0)
		printf("\tO numero %.2f eh positivo.", numero);
	else
		printf("\tO numero %.2f eh negativo.", numero);
}
