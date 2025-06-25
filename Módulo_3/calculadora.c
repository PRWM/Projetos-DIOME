#include <stdio.h>
#include <math.h>


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
	
	printf("()__________________§*&$___________________|=========+-/X Calculadora da DIO X\\-+=========|___________________$&*§__________________()\n\n");
	printf("Por favor, selecione a operação desejada:\n \n = Consultar o número \n + Soma \n - Subtração \n / Divisão \n x Multiplicação \n p Potência \n");
	printf(" r Resto da divisão \n q Raiz Quadrada \n\n");
	printf("Opção: ");
	scanf(" %c", &opcao);
    printf("\n\n");
	
	if (opcao != '=' && opcao != '+' && opcao != '-' && opcao != '/' && opcao != 'x' && opcao != 'p'  && opcao != 'r' && opcao != 'q')
	{
		printf("Opção inválida, reinicie o programa e tente novamente.\n"); // pra não precisa implementa um LOOP, ou corrijo depos
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
		}
	}
}


// Definição das funções:


// Função de consulta.
float consulta()
{
	printf("()______§*&$______|=========+-/X   Calculadora da DIO______Consulta em Outros Sistemas de Númeração   X\\-+=========|______$&*§______()\n\n");

	return 0;
}


// Função de soma. 
float soma()
{
	printf("()______§*&$______|=========+-/X   Calculadora da DIO_____Soma de Números +++++++++++++++++++++++++   X\\-+=========|______$&*§______()\n\n");

	return 0;
}

// Função de subtração. 
float subtracao()
{
	printf("()______§*&$______|=========+-/X   Calculadora da DIO_____Subtração de Números ---------------------  X\\-+=========|______$&*§______()\n\n");

	return 0;
}

// Função de divisão. 
float divisao()
{
	printf("()______§*&$______|=========+-/X   Calculadora da DIO_____Divisão de Números ///////////////////////  X\\-+=========|______$&*§______()\n\n");

	return 0;
}

// Função de multiplicação
float multiplicacao()
{
	printf("()______§*&$______|=========+-/X   Calculadora da DIO_____Multiplicação de Números *****************  X\\-+=========|______$&*§______()\n\n");

	return 0;

}

// Função de potência.
float potencia()
{
	float base, expoente, resultado  = 0;

	printf("()______§*&$______|=========+-/X   Calculadora da DIO_____Calculo de Potência x² x³ x² x³ x² x³ x² x³ X\\-+=========|______$&*§______()\n\n");
	printf("Por favor, digite o valor da base e pressione ENTER: ");	
	scanf("%f", &base);
	printf("Por favor, digite o valor do expoente e pressione ENTER: ");
	scanf("%f", &expoente);
	
	resultado = powf(base, expoente);
	
	printf("%.2f", resultado);

	return resultado;

}

// Função de resto.
float resto()
{
	printf("()______§*&$______|=========+-/X   Calculadora da DIO_____Resto da Divisão        MODULO %%           X\\-+=========|______$&*§______()\n\n");

	return 0;

}

// Função de raiz quadrada.
float raiz()
{
	printf("()______§*&$______|=========+-/X   Calculadora da DIO_____Raiz Quadrada √√√√√√√√√√√√√√√√√√√√√√√√√√√√√ X\\-+=========|______$&*§______()\n\n");
	return 0;

}





