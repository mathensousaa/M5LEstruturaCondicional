/* Fa�a um programa que leia do teclado as 3 notas bimestrais de um aluno,
calcule a m�dia e imprima se o aluno est� aprovado ou vai para a prova final,
sendo a m�dia para aprova��o igual a 7. */

#include <stdio.h>

#define MEDIA_MINIMA 7.0

void main() {
	//definir variaveis
	float nota1, nota2, nota3, media = 0;
	
	//receber valores para as variaveis
	printf("Digite sua primeira nota (0 a 10): ");
	scanf("%f", &nota1);
	printf("Digite sua segunda nota (0 a 10): ");
	scanf("%f", &nota2);
	printf("Digite sua terceira nota (0 a 10): ");
	scanf("%f", &nota3);
	
	media = (nota1 + nota2 + nota3)/3;
	if (nota1 >= 0 && nota1 <= 10 && nota2 >= 0 && nota2 <= 10 && nota3 >= 0 && nota3 <= 10) {
		if (media < MEDIA_MINIMA)
			printf("Sua media foi: %.2f\nVoce foi reprovado! :(", media);
		else if (media >= MEDIA_MINIMA)
			printf("Sua media foi: %.2f\nVoce foi aprovado! :D", media);
	} else
		printf("Voce digitou algum valor invalido!");
}
