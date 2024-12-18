#include <stdio.h>
#include <stdlib.h>

void menu_principal();
void operacoes_basicas();
void calculadora_programador();

int main() {
    int opcao;

    do {
        printf("\n===== CALCULADORA EM C =====\n");
        printf("1 - Operações Básicas\n");
        printf("2 - Calculadora Programador\n");
        printf("3 - Sair\n");
        printf("===========================\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                operacoes_basicas();
                break;
            case 2:
                calculadora_programador();
                break;
            case 3:
                printf("Saindo...\n");
                exit(0);
            default:
                printf("Opcao invalida! Tente novamente.\n");
        }
    } while (1);

    return 0;
}

// Função para operações básicas
void operacoes_basicas() {
    int escolha, num1, num2, resultado;

    printf("\n===== OPERACOES BASICAS =====\n");
    printf("1 - Adicao\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("5 - Resto da divisao\n");
    printf("=============================\n");
    printf("Escolha a operacao: ");
    scanf("%d", &escolha);

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    switch (escolha) {
        case 1:
            resultado = num1 + num2;
            printf("Resultado da Adicao: %d\n", resultado);
            break;
        case 2:
            resultado = num1 - num2;
            printf("Resultado da Subtracao: %d\n", resultado);
            break;
        case 3:
            resultado = num1 * num2;
            printf("Resultado da Multiplicacao: %d\n", resultado);
            break;
        case 4:
            if (num2 == 0) {
                printf("Erro: Divisao por zero!\n");
            } else {
                printf("Resultado da Divisao: %.2f\n", (double)num1 / num2);
            }
            break;
        case 5:
            if (num2 == 0) {
                printf("Erro: Divisao por zero!\n");
            } else {
                resultado = num1 % num2;
                printf("Resto da divisao: %d\n", resultado);
            }
            break;
        default:
            printf("Operacao invalida!\n");
    }
}

// Função para calculadora de programador
void calculadora_programador() {
    int numero;
    printf("\n===== CALCULADORA PROGRAMADOR =====\n");
    printf("Digite um numero decimal: ");
    scanf("%d", &numero);

    printf("\nRepresentacoes do numero %d:\n", numero);
    printf("Hexadecimal: %X\n", numero);
    printf("Octal: %o\n", numero);

    printf("Binario: ");
    for (int i = 31; i >= 0; i--) {
        printf("%d", (numero >> i) & 1);
        if (i % 4 == 0) {
            printf(" "); // Espaço entre grupos de 4 bits
        }
    }
    printf("\n====================================\n");
}
