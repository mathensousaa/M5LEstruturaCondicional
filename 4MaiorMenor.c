/* Escreva um programa que leia dois n�meros do teclado e avise se
o primeiro � maior que o segundo ou n�o. */

#include <stdio.h>

void main() {
	float num1, num2;
	printf("Digite um numero: ");
	scanf("%f", &num1);
	printf("Digite mais um numero: ");
	scanf("%f", &num2);
	
	if (num1 > num2)
		printf("\n\tO numero %.2f eh maior que o numero %.2f", num1, num2);
	else if (num1 < num2)
		printf("\n\tO numero %.2f eh maior que o numero %.2f", num2, num1);
	else 
		printf("\n\tOs numeros sao iguais");
}
