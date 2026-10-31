#include <stdio.h>

int main() {
    float a, b;
    char parar, operacao;
    
    do {
        printf("===============================\n");
        printf("       Calculadora Simples\n");
        printf("===============================\n");
        printf("Selecione uma operação:\n");
        printf("1. Adição\n");
        printf("2. Subtração\n");
        printf("3. Multiplicação\n");
        printf("4. Divisão\n");
        printf("5. Sair\n");
        printf("Opção:\n");
        
        while (scanf(" %c", &operacao) != 1 || (operacao < '1' || operacao > '5')) {
            printf("Opção inválida! Tente novamente.\n");
            while (getchar() != '\n');
        }
        
        if (operacao == '5') {
            printf("Tudo bem, até a próxima!\n");
            return 0;
        } else {
            printf("Digite o primeiro número:\n");
            scanf("%f", &a);
            printf("Digite o segundo número:\n");
            scanf("%f", &b);
            
            if (operacao == '1') {
                printf("Resultado: %.2f + %.2f = %.2f\n", a, b, a + b);
            } 
            else if (operacao == '2') {
                printf("Resultado: %.2f - %.2f = %.2f\n", a, b, a - b);
            } 
            else if (operacao == '3') {
                printf("Resultado: %.2f * %.2f = %.2f\n", a, b, a * b);
            } 
            else if (operacao == '4') {
                if (b == 0) {
                    printf("Erro: Divisão por zero não é permitida.\n");
                } else {
                    printf("Resultado: %.2f / %.2f = %.2f\n", a, b, a / b);
                }
            }
            
            printf("Deseja realizar outra operação? (s/n):\n");
            scanf(" %c", &parar);
            
            while (parar != 's' && parar != 'S' && parar != 'n' && parar != 'N') {
                printf("Resposta inválida. Por favor, digite 's' para sim ou 'n' para não.\n");
                scanf(" %c", &parar);
            }
            
            if (parar == 'n' || parar == 'N') {
                printf("Obrigado por usar a calculadora! Até a próxima.\n");
                return 0;
            }
        }
    } while (parar == 's' || parar == 'S');
    
    return 0;
}
