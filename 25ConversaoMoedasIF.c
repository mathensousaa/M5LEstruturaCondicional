/*
Mostre um menu de opções de conversão entre moedas (1 – dólar americano,
2 – euro, 3 – libra esterlina e 4 – yuan;
• Leia a escolha do usuário;
• Leia o custo em R$ (reais) da operação;
• Imprima o valor da transação na moeda escolhida, de acordo com os fatores
de conversão da tabela abaixo.
*/

#include <stdio.h>
#include <locale.h>

#define DOLAR_AMERICANO 3.258
#define EURO 4.095
#define LIBRA_ESTERLINA 4.529
#define YUAN 0.515

void main() {
	setlocale(LC_ALL, "Portuguese");
	int escolha;
	float valorReal, valorConvertido;
	printf("===Conversao de Real para moedas===\n\n");
	printf("Valor: R$ ");
	scanf("%f", &valorReal);
	printf("\n1 - Dolar americano\n2 - Euro\n3 - Libra esterlina\n4 - Yuan\n\n");
	printf("Converter para (inserir numero correspondente): ");
	scanf("%d", &escolha);
	
	
	
	if (escolha == 1) {
		printf("\n\nConverter de REAL para DOLAR AMERICANO\n");
		printf("R$ %.3f ---> $ %.3f", valorReal, valorReal * DOLAR_AMERICANO);
	}else if(escolha == 2) {
		printf("\n\nConverter de REAL para EURO\n");
		printf("R$ %.3f ---> e %.3f", valorReal, valorReal * EURO);
	}else if(escolha == 3) {
		printf("\n\nConverter de REAL para LIBRA ESTERLINA\n");
		printf("R$ %.3f ---> £ %.3f", valorReal, valorReal * LIBRA_ESTERLINA);
	}else if(escolha == 4) {
		printf("\n\nConverter de REAL para YUAN\n");
		printf("R$ %.3f ---> ¥ %.3f", valorReal, valorReal * YUAN);
	} else 
		printf("Valor invalido");
}
		
	
	if (escolha == 1) {
		printf("\n\nConverter de REAL para DOLAR AMERICANO\n");
		printf("R$ %.3f ---> $ %.3f", valorReal, valorReal * DOLAR_AMERICANO);
	}else if(escolha == 2) {
		printf("\n\nConverter de REAL para EURO\n");
		printf("R$ %.3f ---> e %.3f", valorReal, valorReal * EURO);
	}else if(escolha == 3) {
		printf("\n\nConverter de REAL para LIBRA ESTERLINA\n");
		printf("R$ %.3f ---> £ %.3f", valorReal, valorReal * LIBRA_ESTERLINA);
	}else if(escolha == 4) {
		printf("\n\nConverter de REAL para YUAN\n");
		printf("R$ %.3f ---> ¥ %.3f", valorReal, valorReal * YUAN);
	} else 
		printf("Valor invalido");
}

