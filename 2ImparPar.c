//este programa recebe um numero e indica se � um numero par ou impar

#include <stdio.h>
#include <math.h>
#include <locale.h>

//definir constantes

void main () {
	setlocale(LC_ALL, "Portuguese");
	//declarar variaveis
	int numero;
	printf("Digite um n�mero inteiro: ");
	scanf("%d", &numero);
	
	if (numero % 2 == 1)
		printf("Este n�mero � impar");
	else
		printf("Este n�mero � par");
}

