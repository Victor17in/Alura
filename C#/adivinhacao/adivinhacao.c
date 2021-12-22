#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//#define NUMERO_DE_TENTATIVAS 5 //constantes

int main() {

	// imprime cabecalho do nosso jogo
     printf("        ,----------------,              ,---------,\n");
     printf("   ,-----------------------,          ,/        ,/|\n");
     printf(" ,/                      ,/|        ,/        ,/  |\n");
     printf("+-----------------------+  |      ,/        ,/    |\n");
     printf("|  .-----------------.  |  |     +---------+      |\n");
     printf("|  |                 |  |  |     | -==----'|      |\n");
     printf("|  |  Bem vindo ao   |  |  |     |         |      |\n");
     printf("|  |     jogo da     |  |  |/----|`---=    |      |\n");
     printf("|  |  adivinhação!   |  |  |   ,/|==== ooo |      ;\n");
     printf("|  |                 |  |  |  // |(((( [33]|    ,/\n");
     printf("|  `-----------------'  |,/ .; | |((((     |  ,/\n");
     printf("+-----------------------+  ;;  | |         |,/\n");
     printf("   /_)______________(_/  //'   | +---------+\n");
     printf("   ___________________________/___  ,\n");
     printf("  /  oooooooooooooooo  .o.  oooo /,   \\/---------/\n");
     printf(" / ==ooooooooooooooo==.o.  ooo= //   `\\--{)B    /\n");
     printf("/_==__==========__==_ooo__ooo=_/'   /__________/\n");
     printf(" -----------------------------\n");






	int segundos = time(0);
	srand(segundos);

	int numerogrande = rand();	

	int numerosecreto = numerogrande % 100;
	//printf("O número %d é o secreto.", numerosecreto);	

	int acertou = 0;

	int nivel;
	printf("Qual o nível de dificuldade?\n");
	printf("(1) Fácil (2) Médio (3) Difícil\n\n");
	printf("Escolha: ");
	scanf("%d", &nivel);

	int numerodetentativas;

	switch(nivel) {
	case 1:
		numerodetentativas = 20;
		break;
	case 2:
		numerodetentativas = 15;
		break;
	default:
		numerodetentativas = 6;
		break;
}


	//if(nivel == 1) {
		//numerodetentativas = 20;
//}
	//else if (nivel == 2) {
	//	numerodetentativas = 15;
//}
	//else {
//		numerodetentativas = 6;
//}

	int chute;
	//int ganhou = 0;
	int tentativas = 1;

	double pontos = 1000;
	

	
	
	for(int i = 1; i <= numerodetentativas; i++) {//definição do contador, até, acréscimo (inclemento)
	// printf("Tentativa %d de %d\n", i, NUMERO_DE_TENTATIVAS);
	printf("Tentativa %d\n", tentativas);
	printf("Qual é o seu chute? ");
	scanf("%d", &chute);
	printf("Seu chute foi %d \n", chute);

	if(chute < 0) {
		printf("Você não pode chutar números negativos!\n");
		//i--;
	
		continue;
}
	acertou = (chute == numerosecreto);
	//printf("Acertou: %d\n", acertou);
	int maior = chute > numerosecreto;
	//int menor = chute < numerosecreto;

	if(acertou) {
	//printf("Parabéns! Você acertou!\n");
	//printf("Jogue de novo!\n");
	
	//ganhou = 1;	
	break;
}
	
	else if(maior){
	printf("Seu chute foi maior que o número secreto\n");
}
	else {
	printf("Seu chute foi menor que o número secreto\n");
}

	tentativas++;

	double pontosperdidos = abs(chute - numerosecreto) /(double)2;
	pontos = pontos - pontosperdidos;
}	

	printf("Fim de Jogo!\n");

	if(acertou){

		printf("                       _,-.        _.---._     \n");
		printf("                      (  `\\.__.----       `.   \n");
		printf("                       \\  _        _  ,.   \\  \n");
		printf(" ,+++=._________________)_||______|_|_||    |  \n");
		printf("(_.ooo.===================||======|=|=||    |  \n");
		printf("   ~~'                 |  ~'      `~' o o  /   \n");
		printf("                        \\   /~`\\     o o  /    \n");
		printf("                         `~'    `-.____.-'     \n");



		printf("Você ganhou!\n");
		printf("Você acertou em %d tentativas!\n", tentativas-1 );
		printf("Total de pontos: %.1f\n", pontos);
}	else{
		printf("Você perdeu! Tente de novo!\n");


		printf("			|||\n");
		printf("                        |||\n");
		printf("                        |||\n");
		printf("               oooo$$$$$$$$$$$$oooo\n");
		printf("            oo$$$$$$$$$$$$$$$$$$$$$$$$o\n");
		printf("         oo$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$o\n");
		printf("       o$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$o\n");
		printf("     o$$$$$$          $$$$$$$          $$$$$$o\n");
		printf("    o$$$$$$$$        $$$$$$$$$        $$$$$$$$$o\n");
		printf("   $$$$$$$$$$$      $$$$$$$$$$$      $$$$$$$$$$$$\n");
		printf(" $$$$$$$$$$$$$$    $$$$$$ $$$$$$    $$$$$$$$$$$$$$\n");
		printf("o$$$$$$$$$$$$$$$ $$$$$$$   $$$$$$$ $$$$$$$$$$$$$$$\n");
		printf("o$$$$$$$$$$$$$$$$$$$$$$     $$$$$$$$$$$$$$$$$$$$$$$\n");
		printf("$$$$$$$$$$$$$$$$$$$$$$       $$$$$$$$$$$$$$$$$$$$$$\n");
		printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$ $$$$\n");
		printf("$$$$$  $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$   o$$\n");
		printf(" $$$$    $$$$  $$$$$$$$$$$$$$$$$$$$$  $$$$   o$$$\n");
		printf("  $$$$$o         $$$$  $$$$$   $$$          o$$$\n");
		printf("     $$$$o   .     $$   $$$    $$       .  $$$$\n");
		printf("       $$$$o $$$oo                   oo$$o$$$\n");
		printf("         $$$$$$$$$    o$$$$   $$$$   $$$$$\n");
		printf("             $$$$$$ooo$$$$$ooo$$$$$$$$$\n");
		printf("                $$$$$$$$$$$$$$$$$$$$\n");
		printf("                      $$$$$$$\n");


}
	
	
}
