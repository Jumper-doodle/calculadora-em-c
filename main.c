
#include <stdio.h>
int main() {
    
float a, b;
int operacao;
char parar;
// menu inicial 
do {
printf("===============================\n");
printf("   Calculadora Simples\n");
printf("===============================\n");
printf("Selecione uma operação:\n");
printf("1. Adição\n");
printf("2. Subtração\n");
printf("3. Multiplicação\n");
printf("4. Divisão\n");
printf("5. Sair\n");
printf("Opção:");

// leitura e verificação da entrada
scanf("%d", &operacao);

while (operacao > 5 || operacao < 1) {
    printf("Opção inválida! Tente novamente.\n");
    scanf("%d", &operacao);
}

if(operacao == 5) {
  printf("Tudo bem, até a próxima!");
  return 0;
}
else {
    printf("Digite o primeiro número:\n");
    scanf("%f", &a);
    printf("Digite o segundo número:\n");
    scanf("%f", &b);
    if(operacao == 1) {
      printf("Resultado: %f + %f = %f\n", a, b, a + b);
    }
    else if(operacao == 2) {
      printf("Resultado: %f - %f = %f\n", a, b, a - b);
    }
    else if(operacao == 3) {
      printf("Resultado: %f × %f = %f\n", a, b, a * b);
    }
    else if(operacao == 4 && b == 0) {
        printf("Erro: Divisão por zero não é permitida.\n");
        printf("Tente novamente.")
        continue;
            
    else {
      printf("Resultado: %f ÷ %f = %f\n", a, b, a / b);
    }
  printf("Deseja realizar outra operação? (s/n):\n");
  scanf(" %c", &parar); 
  
}
} while (parar == s);
printf("Obrigada por usar a calculadora! Até a próxima!\n");
return 0;
}
