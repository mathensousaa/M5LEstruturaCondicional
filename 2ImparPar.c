//este programa recebe um numero e indica se é um numero par ou impar

#include <stdio.h>
#include <math.h>
#include <locale.h>

//definir constantes

void main () {
	setlocale(LC_ALL, "Portuguese");
	//declarar variaveis
	int numero;
	printf("Digite um número inteiro: ");
	scanf("%d", &numero);
	
	if (numero % 2 == 1)
		printf("Este número é impar");
	else
		printf("Este número é par");
}

