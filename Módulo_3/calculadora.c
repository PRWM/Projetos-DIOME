#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// Declaração das funções:
float consulta();
float soma();
float subtracao();
float divisao();
float multiplicacao();
float potencia();
float resto();
float raiz();


// Função principal:
int main()
{
	char opcao;

	printf("\n\n");
	printf("()__________________§*&$___________________|=========+-/X Calculadora da DIO X\\-+=========|___________________$&*§__________________()\n\n");
	printf("Por favor, selecione a operação desejada e pressione ENTER: \n\n");
	printf(" = Consultar o número \n + Soma \n - Subtração \n / Divisão \n x Multiplicação \n p Potência \n");
	printf(" r Resto da divisão \n q Raiz Quadrada \n\n\n 0 Sair \n\n\n ");	

	// Loop para verificar se  o input do usuário é uma das opções do menu.
	while(1)
	{
		printf("Opção: ");
		if (scanf(" %c", &opcao)  && opcao != '+' && opcao != '-' && opcao != '/' && opcao != 'x' && opcao != 'p' && opcao != 'r' && opcao != 'q' && opcao != '=' && opcao != '0') 
		{	
			printf("Opção inválida, digite uma das opçoes = + - / x p r q  para prosseguir!.\n");
			continue;
		}
		else
		{
			switch(opcao)
			{
				case '=':
					consulta();
					break;
				case '+':
					soma();
					break;
				case '-':
					subtracao();
					break;
				case '/':
					divisao();
					break;
				case 'x':
					multiplicacao();
					break;
				case 'p':
					potencia();
					break;
				case 'r':
					resto();
					break;
				case 'q':
					raiz();
					break;
				case '0':
					exit(0);					
			}
		}	
	}
}

// Definição das funções:

// Função de consulta.
float consulta()
{
	printf("\n\n");
	printf("()______§*&$______|=========+-/X   Calculadora da DIO______Consulta em Outros Sistemas de Númeração   X\\-+=========|______$&*§______()\n\n");

	float numero = 0;
	int opcao = 0;

	printf("Digite um número para consulta-lo nos sistemas binario e hexadecima:");
	scanf("%f", &numero);
	printf("O numero XX digitado é : %2.f  \n ",numero);

	// IMPLEMENTAR AS PARTES DE BINARIO E HEXADECIMAL _________________________--------__



	// Loop que verifica se o input das opçoes está certo para voltar ao menu principal ou fazer nova conta. 
	while(1)
	{
		printf("\n");
		printf("Digite 1 para voltar ao menu principal ou 2 para efetuar nova consulta: ");

		if (scanf("%d", &opcao) != 1)
		{
			// Se scanf não lê um número, essa linha limpa o buffer de input.
			while (getchar() != '\n') ; // Limpa o  buffer.
			    printf("\n");
				printf("Opção inválida, digite 1 ou 2.\n");
			continue;
		}
		else
		{
			switch(opcao)
			{
				case 1:
					main();
					return 0;
				case 2:
					return consulta();
			}
		}
	}
	return 0;
}

// Função de soma. 
float soma()
{
	printf("\n\n");
	printf("()______§*&$______|=========+-/X   Calculadora da DIO_____Soma de Números +++++++++++++++++++++++++   X\\-+=========|______$&*§______()\n\n");

	float numero, resultado = 0;
	int opcao, contador = 0;

	do
	{
		printf("Digite os numeros a serem somados, um de cada vez e pressione ENTER, para verificar o resultado digite o número zero 0 pressione ENTER:  ");
		scanf("%f", &numero);

		resultado += numero;
		contador++;
	}
	while(numero != 0);  

	contador = contador - 1;
	printf("\n\n");
	printf("A soma dos %i numeros digitados é : %.2f  \n\n",contador, resultado);


	// IMPLEMENTAR AS PARTES DE BINARIO E HEXADECIMAL _________________________--------__


	// Loop que verifica se o input das opçoes está certo para voltar ao menu principal ou fazer nova conta. 
	while(1)
	{
		printf("\n");
		printf("Digite 1 para voltar ao menu principal ou 2 para efetuar nova consulta: ");

		if (scanf("%d", &opcao) != 1)
		{
			// Se scanf não lê um número, essa linha limpa o buffer de input.
			while (getchar() != '\n') ; // Limpa o  buffer.
				printf("\n");
				printf("Opção inválida, digite 1 ou 2.\n");
			continue;
		}
		else
		{
			switch(opcao)
			{
				case 1:
					main();
					return 0;
				case 2:
					return soma();
			}
		}
	}
	return 0;
}

// Função de subtração. 
float subtracao()
{
	printf("\n\n");
	printf("()______§*&$______|=========+-/X   Calculadora da DIO_____Subtração de Números ---------------------  X\\-+=========|______$&*§______()\n\n");

	float numero, resultado = 0;
	int opcao, contador = 0;
	int numero1 = 1;

	do
	{
		printf("Digite os numeros a serem subtraidos, um de cada vez e pressione ENTER, para verificar o resultado digite o número zero 0 pressione ENTER:  ");
		scanf("%f", &numero);	

		if (numero1) 
		{
			resultado = numero;
			numero1 = 0;
		}
		else
		{
			resultado -= numero;
		}

		contador++;
	}
	while(numero != 0);  

	contador = contador - 1;
	printf("\n\n");
	printf("O valor da subtração dos %i numeros digitados é : %.2f  \n ",contador, resultado);





	// IMPLEMENTAR AS PARTES DE BINARIO E HEXADECIMAL _________________________--------__


	// Loop que verifica se o input das opçoes está certo para voltar ao menu principal ou fazer nova conta. 
	while(1)
	{
		printf("\n");
		printf("Digite 1 para voltar ao menu principal ou 2 para efetuar nova consulta: ");

		if (scanf("%d", &opcao) != 1)
		{
			// Se scanf não lê um número, essa linha limpa o buffer de input.
			while (getchar() != '\n') ; // Limpa o  buffer.
			    printf("\n");
				printf("Opção inválida, digite 1 ou 2.\n");
			continue;
		}
		else
		{
			switch(opcao)
			{
				case 1:
					main();
					return 0;
				case 2:
					return subtracao();
			}
		}
	}
	return 0;
}

// Função de divisão. 
float divisao()
{
	printf("\n\n");
	printf("()______§*&$______|=========+-/X   Calculadora da DIO_____Divisão de Números ///////////////////////  X\\-+=========|______$&*§______()\n\n");

	int opcao = 0;
	float dividendo, divisor, resultado = 0;

	printf("Digite o valor do dividendo e pressione enter:  ");
	scanf("%f", &dividendo);
	printf("Digite o valor do divisor e pressione enter:  ");
	scanf("%f", &divisor);

	// Verifica se o divisor é diferente de zero, pois não é possivel dividir por nada.
	if(divisor == 0)
	{
		printf("\n\n");	
		printf("Você quer destruir o universo??? Não é possível dividir por 0 !!!!!!!\n\n ");
		divisao();
	}
	resultado = dividendo / divisor;

	printf("\n\n");	
	printf("O valor da divisão de %.2f por %.2f é igual a =  %.2f \n\n  ", dividendo, divisor, resultado);

	// Loop que verifica se o input das opçoes está certo para voltar ao menu principal ou fazer nova conta. 
	while(1)
	{
		printf("\n");
		printf("Digite 1 para voltar ao menu principal ou 2 para efetuar nova consulta: ");

		if (scanf("%d", &opcao) != 1)
		{
			// Se scanf não lê um número, essa linha limpa o buffer de input.
			while (getchar() != '\n') ; // Limpa o  buffer.
				printf("\n");
				printf("Opção inválida, digite 1 ou 2.\n");
			continue;
		}
		else
		{
			switch(opcao)
			{
				case 1:
					main();
					return 0;
				case 2:
					return divisao();
			}
		}
	}
	return 0;
}

// Função de multiplicação
float multiplicacao()
{
	printf("\n\n");
	printf("()______§*&$______|=========+-/X   Calculadora da DIO_____Multiplicação de Números *****************  X\\-+=========|______$&*§______()\n\n");

	float numero, resultado = 1;
    int opcao, contador = 0;
    
        while (1) 
        {
        printf("Digite Digite os numeros a serem multiplicados, um de cada vez e pressione ENTER, para verificar o resultado digite o número zero 0 pressione ENTER:");    
        scanf("%f", &numero);

        if (numero == 0) 
		{
            if (contador == 0) 
			{
                printf("Nenhum número foi digitado.\n");
                return 0;
            }
            break;
        }
        resultado *= numero;
        contador++;
    	} 

	printf("\n\n");
	printf("O resultado da multiplicação  dos %i numeros digitados é : %.2f  \n\n",contador, resultado);


	// IMPLEMENTAR AS PARTES DE BINARIO E HEXADECIMAL _________________________--------__


	// Loop que verifica se o input das opçoes está certo para voltar ao menu principal ou fazer nova conta. 
	while(1)
	{
		printf("\n");
		printf("Digite 1 para voltar ao menu principal ou 2 para efetuar nova consulta: ");

		if (scanf("%d", &opcao) != 1)
		{
			// Se scanf não lê um número, essa linha limpa o buffer de input.
			while (getchar() != '\n') ; // Limpa o  buffer.
				printf("\n");
				printf("Opção inválida, digite 1 ou 2.\n");
			continue;
		}
		else
		{
			switch(opcao)
			{
				case 1:
					main();
					return 0;
				case 2:
					return multiplicacao();
			}
		}
	}
	return 0;
}

// Função de potência.
float potencia()
{
	float base, expoente, resultado  = 0;
	int opcao = 0;

	printf("()______§*&$______|=========+-/X   Calculadora da DIO_____Calculo de Potência x² x³ x² x³ x² x³ x² x³ X\\-+=========|______$&*§______()\n\n");
	printf("Por favor, digite o valor da base e pressione ENTER: ");	
	scanf("%f", &base);
	printf("Por favor, digite o valor do expoente e pressione ENTER: ");
	scanf("%f", &expoente);

	resultado = powf(base, expoente);

	printf("\n\n");
	printf("O resultado de %.2f elevado a %.2f, no sistema decimal é: %.2f  ",base, expoente, resultado);
	printf("\n\n\n");	


	// ADICIONAR OS RESULTADOS BINARIOS E HEXADECIMAL.......................................


	// Loop que verifica se o input das opçoes está certo para voltar ao menu principal ou fazer nova conta. 
	while(1)
	{
		printf("\n");
		printf("Digite 1 para voltar ao menu principal ou 2 para efetuar nova conta: ");

		if (scanf("%d", &opcao) != 1)
		{
			// Se scanf não lê um número, essa linha limpa o buffer de input.
			while (getchar() != '\n') ; // Limpa o  buffer.
				printf("\n");
				printf("Opção inválida, digite 1 ou 2.\n");
			continue;
		}
		else
		{
			switch(opcao)
			{
				case 1:
					main();
					return 0;
				case 2:
					return potencia();
			}
		}
	}
	return resultado;
}

// Função de resto.
float resto()
{
	printf("\n\n");
	printf("()______§*&$______|=========+-/X   Calculadora da DIO_____Resto da Divisão        MODULO %%           X\\-+=========|______$&*§______()\n\n");

	int opcao, dividendo, divisor, resultado = 0;

	printf("Digite o valor INTEIRO do dividendo e pressione enter:  ");
	scanf("%i", &dividendo);
	printf("Digite o valor INTEIRO do divisor e pressione enter:  ");
	scanf("%i", &divisor);

	// Verifica se o divisor é diferente de zero, pois não é possivel dividir por nada.
	if(divisor == 0)
	{
		printf("\n\n");	
		printf("Você quer destruir o universo??? Não é possível dividir por 0 !!!!!!!\n\n ");
		resto();
	}
	resultado = dividendo % divisor;

	printf("\n\n");	
	printf("O resto da divisão, ou MODULO de %i por %.i é igual a =  %i \n\n  ", dividendo, divisor, resultado);

	// Loop que verifica se o input das opçoes está certo para voltar ao menu principal ou fazer nova conta. 
	while(1)
	{
		printf("\n");
		printf("Digite 1 para voltar ao menu principal ou 2 para efetuar nova consulta: ");

		if (scanf("%d", &opcao) != 1)
		{
			// Se scanf não lê um número, essa linha limpa o buffer de input.
			while (getchar() != '\n') ; // Limpa o  buffer.
				printf("\n");
				printf("Opção inválida, digite 1 ou 2.\n");
			continue;
		}
		else
		{
			switch(opcao)
			{
				case 1:
					main();
					return 0;
				case 2:
					return resto();
			}
		}
	}
	return 0;
}

// Função de raiz quadrada.
float raiz()
{
	printf("\n\n");
	printf("()______§*&$______|=========+-/X   Calculadora da DIO_____Raiz Quadrada √√√√√√√√√√√√√√√√√√√√√√√√√√√√√ X\\-+=========|______$&*§______()\n\n");

	int opcao = 0;
	float numero, resultado = 0;

	printf("Digite um número para consular a sua Raiz Quadrada: ");
	scanf("%f", &numero);

	resultado = sqrt(numero);

	printf("\n\n");
	printf("A Raiz Quadrada de %.2f é = %.2f \n\n", numero, resultado);

	while(1)
	{
		printf("\n");
		printf("Digite 1 para voltar ao menu principal ou 2 para efetuar nova consulta: ");

		if (scanf("%d", &opcao) != 1)
		{
			// Se scanf não lê um número, essa linha limpa o buffer de input.
			while (getchar() != '\n') ; // Limpa o  buffer.
				printf("\n");
				printf("Opção inválida, digite 1 ou 2.\n");
			continue;
		}
		else
		{
			switch(opcao)
			{
				case 1:
					main();
					return 0;
				case 2:
					return raiz();
			}
		}
	}
	return 0;
}





