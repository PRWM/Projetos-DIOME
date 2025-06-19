#include <stdio.h>
#include <stdlib.h>
#include <time.h>


// Declaração de funções
void inicializarTabuleiro(char tabuleiro[3][3]);
void imprimirTabuleiro(char tabuleiro[3][3]);
int verificarVitoria(char tabuleiro[3][3]);
int jogadaValida(char tabuleiro[3][3], int linha, int coluna);
void jogadaComputador(char tabuleiro[3][3]);
void macetePosicoes();

int main() 
{
    char tabuleiro[3][3];
    int linha, coluna, jogadas = 0, vencedor = 0;
    char jogador = 'X'; // Jogador humano

    srand(time(NULL)); // Inicializa o gerador aleatório para o computador jogar diferente a cada vez;
    inicializarTabuleiro(tabuleiro); // Preenche o tabuleiro com espaços em branco	

    while (1)
	{				
        imprimirTabuleiro(tabuleiro); // Mostra o tabuleiro na tela
   		macetePosicoes();			  // Mostra um mapeamento das posições para facilitar as jogadas
		
		// Vez do jogador
        if (jogador == 'X')
		{
            printf("Sua vez (jogador X). Digite linha e coluna (0-2), e pressione ENTER: ");
            scanf("%d %d", &linha, &coluna);
            if (!jogadaValida(tabuleiro, linha, coluna))
			{
                printf("Jogada inválida. Tente novamente.\n");
                continue;
            }
            tabuleiro[linha][coluna] = jogador;
        }
		else// vez da máquina
		{
            printf("Vez do computador (jogador O)...\n");
            jogadaComputador(tabuleiro);
        }
        jogadas++;  // Contador de jogadas feitas

		// Verifica se alguém venceu
        vencedor = verificarVitoria(tabuleiro);

        if (vencedor) 
		{
            imprimirTabuleiro(tabuleiro);
            if (jogador == 'X')
			{
                printf("Parabéns! Você venceu!\n");
            }
			else
			{
                printf("O computador venceu!\n");
            break;
			}
        }

		// Verifica se houve empate 
        if (jogadas == 9) 
		{
            imprimirTabuleiro(tabuleiro);
            printf("Empate!\n");
            break;
        }
		
		// Troca de jogador
        jogador = (jogador == 'X') ? 'O' : 'X';
    }
    return 0;
}

// Preenche o tabuleiro com espaços vazios
void inicializarTabuleiro(char tabuleiro[3][3]) 
{
    for (int i = 0; i < 3; i++)
	{
        for (int j = 0; j < 3; j++)
		{
            tabuleiro[i][j] = ' ';
		}	
	}		
}

// Mostra o tabuleiro com formatação
void imprimirTabuleiro(char tabuleiro[3][3]) 
{
    system("clear || cls"); // Limpa o terminal 
    printf("\n");
    for (int i = 0; i < 3; i++)
	{
        printf(" %c | %c | %c ", tabuleiro[i][0], tabuleiro[i][1], tabuleiro[i][2]);
        if (i != 2)
		{
            printf("\n---|---|---\n");
		}
    }
    printf("\n\n");
}

// Verifica todas as linhas, colunas e diagonais para ver se alguém venceu:
int verificarVitoria(char t[3][3]) 
{
    for (int i = 0; i < 3; i++) 
	{
        if (t[i][0] == t[i][1] && t[i][1] == t[i][2] && t[i][0] != ' ')
		{
            return 1;
		}
        if (t[0][i] == t[1][i] && t[1][i] == t[2][i] && t[0][i] != ' ')
		{
            return 1;
		}	
    }

    if (t[0][0] == t[1][1] && t[1][1] == t[2][2] && t[0][0] != ' ')
	{
        return 1;
	}	
    if (t[0][2] == t[1][1] && t[1][1] == t[2][0] && t[0][2] != ' ')
	{
        return 1;
	}
    return 0;
}

// Verifica se a posição está dentro do tabuleiro e se está vazia
int jogadaValida(char tabuleiro[3][3], int linha, int coluna)
{
    return linha >= 0 && linha < 3 && coluna >= 0 && coluna < 3 && tabuleiro[linha][coluna] == ' ';
}

// Inteligência artificial simples (jogada aleatória)
void jogadaComputador(char tabuleiro[3][3])
{
    int linha, coluna;

    // Tenta encontrar uma jogada vencedora
    for (int i = 0; i < 3; i++)
	{
        for (int j = 0; j < 3; j++)
		{
            if (tabuleiro[i][j] == ' ')
			{
                tabuleiro[i][j] = 'O';
                if (verificarVitoria(tabuleiro)) return;
                tabuleiro[i][j] = ' ';
            }
        }
	}

   // Tenta bloquear o jogador humano 
    for (int i = 0; i < 3; i++)
	{
        for (int j = 0; j < 3; j++)
		{
            if (tabuleiro[i][j] == ' ')
			{
                tabuleiro[i][j] = 'X';
                if (verificarVitoria(tabuleiro)) 
				{
                    tabuleiro[i][j] = 'O';
                    return;
                }
                tabuleiro[i][j] = ' ';
            }
        }
	}

    // Joga aleatoriamente quando não pode vencer nem bloquear
	do
	{
        linha = rand() % 3;
        coluna = rand() % 3;
    } 
	while (!jogadaValida(tabuleiro, linha, coluna));
    tabuleiro[linha][coluna] = 'O';
}

// Mostra uma "mapa" das posições para facilitar as jogadas
void macetePosicoes()
{	printf("\n");
	printf("Macete das Posições: \n\n");
	printf(" 0 0 | 0 1 | 0 2 \n\n 1 0 | 1 1 | 1 2 \n\n 2 0 | 2 1 | 2 2 \n\n");
}
 
