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
void decimalparabinario(int decimal, char *binario);
void decimalparahexadecimal(int decimal, char *hexadecimal);

// Função principal que também é o menu inicial:
int main()
{
	char opcao;

	printf("\n\n");
	printf("()__________________§*&$___________________|=========+-/X Calculadora da DIO X\\-+=========|___________________$&*§__________________()\n\n");
	printf("Por favor, selecione a operação desejada e pressione ENTER: \n\n");
	printf(" = Consultar o número \n + Soma \n - Subtração \n / Divisão \n x Multiplicação \n p Potência \n");
	printf(" r Resto da divisão \n q Raiz Quadrada \n\n\n 0 Sair \n\n\n ");	

	// Loop para verificar se o input do usuário é uma das opções do menu.
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
	float numero = 0;
	int opcao = 0 , decimal = 0;
	char binario[100];
	char hexadecimal[20];

	printf("\n\n");
	printf("()______§*&$______|=========+-/X   Calculadora da DIO______Consulta em Outros Sistemas de Númeração   X\\-+=========|______$&*§______()\n\n");
	printf("Digite um número para consulta-lo nos sistemas binario e hexadecimal: ");
	scanf("%f", &numero);

	// Type casting, ou, conversão de tipos para mudar o valor de float para int.
	decimal = (int)numero;	

	decimalparabinario(decimal, binario);
	decimalparahexadecimal(decimal, hexadecimal);

	printf("\n\n");
	printf("O numero digitado no sistema binário é : %s \n\n", binario);
	printf("O numero digitado no sistema hexadecial é : %s \n\n",hexadecimal);

	// Loop que verifica se o input das opçoes está certo para voltar ao menu principal ou fazer nova conta. 
	while(1)
	{
		printf("\n");
		printf("Digite 1 para voltar ao menu principal ou 2 para efetuar nova consulta: ");

		if (scanf("%d", &opcao) != 1)
		{
			// Se scanf não lê um número, essa linha limpa o buffer de input.
			while (getchar() != '\n') // Limpa o  buffer.
			{
			    printf("\n");
				printf("Opção inválida, digite 1 ou 2.\n");
			}	
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
	float numero = 0 , resultado = 0;
	int opcao = 0 , contador = 0, decimal = 0;
	char binario[100];
	char hexadecimal[20];

	printf("\n\n");
	printf("()______§*&$______|=========+-/X   Calculadora da DIO_____Soma de Números +++++++++++++++++++++++++   X\\-+=========|______$&*§______()\n\n");

	/* Loop que solicita o(s) valor(es), e vai adicionando à variável resultado até o usuário digitar zero para fazer a soma, 
	 uma vez que somar zero a qualquer valor não altera nada. */
	do
	{
		printf("Digite um número de cada vez e pressione ENTER, para verificar o resultado da soma digite o número zero 0 pressione ENTER: ");
		scanf("%f", &numero);

		resultado += numero;
		contador++;
	}
	while(numero != 0);  	

	contador = contador - 1;
	
	// Type casting, ou, conversão de tipos para mudar o valor de float para int.
	decimal = (int)resultado;

	decimalparabinario(decimal, binario);
	decimalparahexadecimal(decimal, hexadecimal);

	printf("\n\n");
	printf("A soma dos %i valores digitados no sistema decimal é: %.2f \n\n", contador, resultado);
	printf("O resultado da soma no sistema binário é: %s \n\n", binario);
	printf("O resultado da soma no sistema hexadecimal é: %s \n\n", hexadecimal);

	// Loop que verifica se o input das opçoes está certo para voltar ao menu principal ou fazer nova conta. 
	while(1)
	{
		printf("\n");
		printf("Digite 1 para voltar ao menu principal ou 2 para efetuar nova consulta: ");

		if (scanf("%d", &opcao) != 1)
		{
			// Se scanf não lê um número, essa linha limpa o buffer de input.
			while (getchar() != '\n') // Limpa o  buffer.
			{
				printf("\n");
				printf("Opção inválida, digite 1 ou 2.\n");
			}
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
	float numero = 0, resultado = 0;
	int opcao = 0, contador = 0, decimal = 0;
	int numero1 = 1;
	char binario[100];
	char hexadecimal[20];

	printf("\n\n");
	printf("()______§*&$______|=========+-/X   Calculadora da DIO_____Subtração de Números ---------------------  X\\-+=========|______$&*§______()\n\n");


	/* Loop que solicita o(s) valor(es) e substitui o valor do resultado com o do primeiro input, do caso contrário a conta sempre fica negativa e incorreta.
	   Para verificar o resultado digita 0, uma vez que subtrair zero não altera a conta	*/   
	do
	{
		printf("Digite um número de cada vez e pressione ENTER, para verificar o resultado da subtração digite o número zero 0 pressione ENTER: ");
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
		
	// Type casting, ou, conversão de tipos para mudar o valor de float para int.
	decimal = (int)resultado;

	decimalparabinario(decimal, binario);
	decimalparahexadecimal(decimal, hexadecimal);

	printf("\n\n");
	printf("o valor da subtração dos %i valores digitados no sistema decimal é: %.2f \n\n", contador, resultado);
	printf("O resultado da subtração no sistema binário é: %s \n\n", binario);
	printf("O resultado da subtração no sistema hexadecimal é: %s \n\n", hexadecimal);

	// Loop que verifica se o input das opçoes está certo para voltar ao menu principal ou fazer nova conta. 
	while(1)
	{
		printf("\n");
		printf("Digite 1 para voltar ao menu principal ou 2 para efetuar nova consulta: ");

		if (scanf("%d", &opcao) != 1)
		{
			// Se scanf não lê um número, essa linha limpa o buffer de input.
			while (getchar() != '\n') // Limpa o  buffer.
			{
			    printf("\n");
				printf("Opção inválida, digite 1 ou 2.\n");
			}	
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
	int opcao = 0, decimal = 0;
	float dividendo = 0, divisor = 0, resultado = 0;
	char binario[100];
	char hexadecimal[20];

	printf("\n\n");
	printf("()______§*&$______|=========+-/X   Calculadora da DIO_____Divisão de Números ///////////////////////  X\\-+=========|______$&*§______()\n\n");
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
	// Divisão é um operador aritimético imbutido na linguagem.
	resultado = dividendo / divisor;

	// Type casting, ou, conversão de tipos para mudar o valor de float para int.
	decimal = (int)resultado;

	decimalparabinario(decimal, binario);
	decimalparahexadecimal(decimal, hexadecimal);

	printf("\n\n");
	printf("o valor da divisão no sistema decimal é: %.2f \n\n", resultado);
	printf("O resultado da divisão no sistema binário é: %s \n\n", binario);
	printf("O resultado da divisão no sistema hexadecimal é: %s \n\n", hexadecimal);

	// Loop que verifica se o input das opçoes está certo para voltar ao menu principal ou fazer nova conta. 
	while(1)
	{
		printf("\n");
		printf("Digite 1 para voltar ao menu principal ou 2 para efetuar nova consulta: ");

		if (scanf("%d", &opcao) != 1)
		{
			// Se scanf não lê um número, essa linha limpa o buffer de input.
			while (getchar() != '\n') // Limpa o  buffer.
			{
				printf("\n");
				printf("Opção inválida, digite 1 ou 2.\n");
			}	
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
	float numero = 0, resultado = 1;
    int opcao = 0, contador = 0, decimal = 0;
   	char binario[100];
	char hexadecimal[20];

	printf("\n\n");
	printf("()______§*&$______|=========+-/X   Calculadora da DIO_____Multiplicação de Números *****************  X\\-+=========|______$&*§______()\n\n");

	// Loop que solicita o(s) numero(s) e os multiplica até o usuário digitar 0, visto que qualquer número multiplicado por zero é zero.
        while (1) 
        {
       	printf("Digite um número de cada vez e pressione ENTER, para verificar o resultado da multiplicação digite o número zero 0 pressione ENTER: ");
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
	
	// Type casting, ou, conversão de tipos para mudar o valor de float para int.
	decimal = (int)resultado;

	decimalparabinario(decimal, binario);
	decimalparahexadecimal(decimal, hexadecimal);

	printf("\n\n");
	printf("o valor da multiplicação dos %i números digitados no sistema decimal é: %.2f \n\n", contador, resultado);
	printf("O resultado da multiplicação no sistema binário é: %s \n\n", binario);
	printf("O resultado da multiplicação no sistema hexadecimal é: %s \n\n", hexadecimal);

	// Loop que verifica se o input das opçoes está certo para voltar ao menu principal ou fazer nova conta. 
	while(1)
	{
		printf("\n");
		printf("Digite 1 para voltar ao menu principal ou 2 para efetuar nova consulta: ");

		if (scanf("%d", &opcao) != 1)
		{
			// Se scanf não lê um número, essa linha limpa o buffer de input.
			while (getchar() != '\n') // Limpa o  buffer.
			{
				printf("\n");
				printf("Opção inválida, digite 1 ou 2.\n");
			}	
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
	float base = 0, expoente = 0, resultado  = 0;
	int opcao = 0, decimal = 0;
	char binario[100];
	char hexadecimal[20];

	printf("()______§*&$______|=========+-/X   Calculadora da DIO_____Calculo de Potência x² x³ x² x³ x² x³ x² x³ X\\-+=========|______$&*§______()\n\n");
	printf("Por favor, digite o valor da base e pressione ENTER: ");	
	scanf("%f", &base);
	printf("Por favor, digite o valor do expoente e pressione ENTER: ");
	scanf("%f", &expoente);

	// A função de potência está incluida na biblioteca <math.h> .
	resultado = powf(base, expoente);

	// Type casting, ou, conversão de tipos para mudar o valor de float para int.
	decimal = (int)resultado;

	decimalparabinario(decimal, binario);
	decimalparahexadecimal(decimal, hexadecimal);

	printf("\n\n");
	printf("o valor de %.1f elevado a %.1f no sistema decimal é: %.2f \n\n", base, expoente, resultado);
	printf("O resultado no sistema binário é: %s \n\n", binario);
	printf("O resultado no sistema hexadecimal é: %s \n\n", hexadecimal);

	// Loop que verifica se o input das opçoes está certo para voltar ao menu principal ou fazer nova conta. 
	while(1)
	{
		printf("\n");
		printf("Digite 1 para voltar ao menu principal ou 2 para efetuar nova conta: ");

		if (scanf("%d", &opcao) != 1)
		{
			// Se scanf não lê um número, essa linha limpa o buffer de input.
			while (getchar() != '\n') // Limpa o  buffer.
			{
				printf("\n");
				printf("Opção inválida, digite 1 ou 2.\n");
			}
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
	int opcao = 0, dividendo = 0, divisor = 0, resultado = 0, decimal = 0;
	char binario[100];
	char hexadecimal[20];

	printf("\n\n");
	printf("()______§*&$______|=========+-/X   Calculadora da DIO_____Resto da Divisão        MODULO %%           X\\-+=========|______$&*§______()\n\n");
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
	// Módulo é um operador aritimético imbutido na linguagem.
	resultado = dividendo % divisor;
	
	// Type casting, ou, conversão de tipos para mudar o valor de float para int.
	decimal = (int)resultado;

	decimalparabinario(decimal, binario);
	decimalparahexadecimal(decimal, hexadecimal);

	printf("\n\n");	
	printf("O resto da divisão, ou MODULO de %i por %.i é igual a =  %i \n\n", dividendo, divisor, resultado);
	printf("O módulo no sistema binário é: %s \n\n", binario);
	printf("O módulo no sistema hexadecimal é: %s \n\n", hexadecimal);

	// Loop que verifica se o input das opçoes está certo para voltar ao menu principal ou fazer nova conta. 
	while(1)
	{
		printf("\n");
		printf("Digite 1 para voltar ao menu principal ou 2 para efetuar nova consulta: ");

		if (scanf("%d", &opcao) != 1)
		{
			// Se scanf não lê um número, essa linha limpa o buffer de input.
			while (getchar() != '\n') // Limpa o  buffer.
			{
				printf("\n");
				printf("Opção inválida, digite 1 ou 2.\n");
			}
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
	int opcao = 0, decimal = 0;
	float numero = 0, resultado = 0;
	char binario[100];
	char hexadecimal[20];

	printf("\n\n");
	printf("()______§*&$______|=========+-/X   Calculadora da DIO_____Raiz Quadrada √√√√√√√√√√√√√√√√√√√√√√√√√√√√√ X\\-+=========|______$&*§______()\n\n");
	printf("Digite um número para consular a sua Raiz Quadrada: ");
	scanf("%f", &numero);

	// A função de raiz quadrada está incluida na biblioteca <math.h> .
	resultado = sqrt(numero);

	// Type casting, ou, conversão de tipos para mudar o valor de float para int.
	decimal = (int)resultado;

	decimalparabinario(decimal, binario);
	decimalparahexadecimal(decimal, hexadecimal);

	printf("\n\n");	
	printf("A Raiz Quadrada de %.2f no sistema decimal é: %.2f \n\n", numero, resultado);
	printf("O valor da raiz no sistema binário é: %s \n\n", binario);
	printf("O valor da raiz no sistema hexadecimal é: %s \n\n", hexadecimal);

	// Loop que verifica se o input das opçoes está certo para voltar ao menu principal ou fazer nova conta. 
	while(1)
	{
		printf("\n");
		printf("Digite 1 para voltar ao menu principal ou 2 para efetuar nova consulta: ");

		if (scanf("%d", &opcao) != 1)
		{
			// Se scanf não lê um número, essa linha limpa o buffer de input.
			while (getchar() != '\n') // Limpa o  buffer.
			{
				printf("\n");
				printf("Opção inválida, digite 1 ou 2.\n");
			}	
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

// Função que converte numeros decimais inteiros positivos para binário.
void decimalparabinario(int decimal, char *binario)
{
    int i = 0;
    if (decimal == 0) 
	{
        binario[i++] = '0';
        binario[i] = '\0';
        return;
    }
    while (decimal > 0) 
	{
        binario[i++] = (decimal % 2) + '0';
        decimal /= 2;
    }
    binario[i] = '\0';
    
	// Inverte a string
    int inicio = 0;
    int fim = i - 1;
    while (inicio < fim) 
	{
        char temp = binario[inicio];
        binario[inicio] = binario[fim];
        binario[fim] = temp;
        inicio++;
        fim--;
    }
}

// Função que converte numeros decimais inteiros positivos para hexadecimal.
void decimalparahexadecimal(int decimal, char *hexadecimal)
{
    int resto, i = 0;
    char hexChars[] = "0123456789ABCDEF";

    if (decimal == 0) 
	{
        hexadecimal[i++] = '0';
        hexadecimal[i] = '\0';
        return;
    }

    while (decimal != 0) 
	{
        resto = decimal % 16;
        hexadecimal[i++] = hexChars[resto];
        decimal /= 16;
    }
    hexadecimal[i] = '\0';

    // Inverte a string
    int start = 0;
    int end = i - 1;
    while (start < end) 
	{
        char temp = hexadecimal[start];
        hexadecimal[start] = hexadecimal[end];
        hexadecimal[end] = temp;
        start++;
        end--;
    }
}

