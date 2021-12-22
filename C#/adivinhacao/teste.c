#include <stdio.h>
#include <stdlib.h>

int main() {

	//int a = 3;
	//int b = abs(-3);
	//double pontos = a / (double)b;
	//printf("%f\n", pontos);

	//double pi = 3.1415;
	//int piconvertido = (int)pi;

	//printf("%f %d\n", pi, piconvertido);


	//Escreva um programa que peça um inteiro ao usuário, e com esse inteiro, ele imprima, linha-a-linha, a tabuada daquele número até o 10. 
	int numero;
	printf("Escolha um número inteiro? ");
	scanf("%d", &numero);
	for(int i = 1; i <= 10; i++){
		int result = numero * i; 
		printf(" %d x %d = %d\n", numero, i, result); 
}

}
