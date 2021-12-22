#include <stdio.h>

// Escreva um programa que peça para o usuário digitar duas variáveis inteiras (x e y) e imprima o resultado da multiplicação entre essas duas variáveis.

int main() {

	int x;
	int y;
	int z;
	printf("Qual é o primeiro número? ");
	scanf("%d", &x);
	printf("Qual é o segundo número? ");
	scanf("%d", &y);
	z = x*y;
	printf("A multiplicação é %d\n", z);
	
}



